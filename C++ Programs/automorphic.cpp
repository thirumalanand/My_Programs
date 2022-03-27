#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout<<"Enter A number: ";
    cin>>n;
    int sq=n*n;
    int flag=1;
    while(n!=0)
    {
        int d1=n%10;
        int d2=sq%10;
        if(d1==d2)
        {   
            n=n/10;
            sq=sq/10;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"It is Automorphic";
    else cout<<"Not Automorphic";
    return 0;
}