#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int main()
{
    int n,m;
    cout<<"Enter Size : larger first";
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    bool flag=true;
    for(int i=0; i<m; i++)
    {
        int j;
        for(j=0; j<n; j++)
        {
            if(b[i]==a[j])
            {
                break;
            }
        }
        if (j == n)
        {    
            flag=false; break;
        }
    }
    if(flag) cout<<"subset";
    else cout<<"Not a subset";
    return 0;
}