#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

void print_arr(int a[], int n)
{
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
}

void reverse(int a[], int n)
{
    for(int i=0; i<(n/2); i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    print_arr(a,n);
}


int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    reverse(a,n);
    return 0;
}