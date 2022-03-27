#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

//not correctly working verify once
int main()
{
    int m;
    cout<<"Enter Size : ";
    cin>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    int b[m];
    for(int i=0; i<m; i++)
    {
        b[i]=abs(a[i]);
    }
    sort(b,b+m);
    int prod=1;
    for(int i=0; i<m; i++)
    {
        if(b[i]>0)
        {
            prod*=b[i];
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Product: "<<prod;
    return 0;
}