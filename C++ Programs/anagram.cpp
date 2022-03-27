#include <iostream>
using namespace std;


int check_anagram(string s1,string s2)
{
    int a1[26]={0}, a2[26]={0}; //used for representing alphabets

//if string lengths are different then they are not anagrams
    if(s1.length()!=s2.length()) return 0;

// count the frequency of alphabets in both strings

//for string1 – storing frequency for each letter in the string
    for(int i=0; s1[i]!='\0'; i++)
    {
        a1[s1[i]-'a']++;
    }

//for string2 – storing frequency for each letter in the string
    for(int i=0; s2[i]!='\0'; i++)
    {
        a2[s2[i]-'a']++;
    }

//Anagram check – comparison step the frequencies of each char in both strings
    for(int i=0; i<26; i++)
    {
        if(a1[i] != a2[i]) return 0;
    }
    return 1;
}



int main()
{
    int n;
    string s1,s2;
    cout <<"Enter two strings :"<<endl;
    cin>>s1;
    cin>>s2;
    if(check_anagram(s1,s2))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}
