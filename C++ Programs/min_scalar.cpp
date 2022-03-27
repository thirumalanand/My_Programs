#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


void check(int a[], int b[], int n)
{
    int sum;
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0; i<(n/2); i++)   //for max scalar this for loop is not required
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(int i=0; i<n; i++)
    {
        sum=sum+(a[i]*b[i]);
    }
    cout<<sum;
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    check(a,b,n);
    return 0;
}