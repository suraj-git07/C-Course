#include<iostream>
#include<string>
using namespace std;

// reverse a str using recursion
void  reverse( string word )
{
    if (word.size()==0)  // base case
    {
        return;
    }
    
    string ros = word.substr(1);
    reverse(ros);
    cout<<word[0];

}

//replace "pi" with 3.14

void replacepi(string s)
{
   if (s.length()==0)  //base case
   {
       return;
   }
   
   if (s[0] == 'p' && s[1]=='i')
   {
       cout<<"3.14";
       replacepi(s.substr(2));
   }
   
   else
   {
       cout<<s[0];
       replacepi(s.substr(1));
   }
   


}


//tower of hanoi

void towerofHanoi(int n ,char src , char dest,char helper)
{
   if (n==0)
   {
       return;
   }   
   towerofHanoi(n-1,src, helper , dest);
   cout<<"Move from "<<src<<" to "<<dest<<endl;
   towerofHanoi(n-1,helper , dest , src);
}

// remove dublicates

string redub(string str )
{
    if (str.size()==0)
    {
        return "";
    }
    
    char ch =str[0];
    string ans = redub(str.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return ch+ans;

}

//move all x to teh end of the string

string moveallX(string str)
{
    if (str.size()==0)
    {
        return "";
    }
    char ch = str[0];
    string ans = moveallX(str.substr(1));
    if (ch=='x')
    {
        return ans+ch;
    }
    
    return ch+ans;


}

// print all possible words from phone digits

string keypadArr[] = {"", "./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


void keypad(string s  ,string ans)
{
    if (s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch =s[0];
    string code = keypadArr[ch-'0'];
    string ros = s.substr(1);
    
    for (int i = 0; i < code.length() ; i++)
    {
        keypad(ros , ans+code[i]);
    }
}


int main(int argc, char const *argv[])
{
    // reverse("binod");
    //replacepi("pippppiiiipi");
    // towerofHanoi(5,'A','C','B');
    // cout<<redub("aaabbccccccccdeeee");
    // cout<<moveallX("xxasgdbbxxbhdhbx");
    keypad("23","");



    return 0;
}
