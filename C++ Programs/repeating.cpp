#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


void check(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j] && i!=j) cout<<a[i]<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    check(a,n);
    return 0;
}