#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100],t[100];
    cin.get(str,100);
    int j=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ') continue;
        t[j++] = str[i];
    }
    cout<<t;
}