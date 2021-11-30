#include <iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string word ;
    cout<<"enter the word:";
    getline(cin,word);
    
    //making alpha array
    int alpha_ar[26];
    for (int i = 0; i < 26; i++)
    {
        alpha_ar[i]= 0;
    }
    
    
    // traverse the word

    for (size_t i = 0; i < word.size(); i++)
    {
        if (word[i]==' ')
        {
            continue;
        }
        else
        {
            alpha_ar[word[i]-'a']++;
        }    
    }
    
    //checking for max freq

    int max_index = 0 , max_freq = 0;

    for (int i = 0; i < 26; i++)
    {
        if (alpha_ar[i]>max_freq)
        {
            max_freq = alpha_ar[i];
            max_index = i;
        }
        
        
    }
    char max_alpha = 'a'+ max_index ;
    cout<<"alphabet with max freq of "<<max_freq<<" is "<< max_alpha;
    
    return 0;
}
