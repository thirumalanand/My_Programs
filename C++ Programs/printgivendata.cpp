#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
    char s1[50];
    string s2;

    cout<<"Enter a String"<<endl;
    cin.getline(s1,50);
  
    cout<<"Enter string 2"<<endl;
    getline(cin,s2);
      
    cout<<strlen(s1)<<endl;
    cout<<s1[1]<<" "<<s2[1];

    return 0;
}
