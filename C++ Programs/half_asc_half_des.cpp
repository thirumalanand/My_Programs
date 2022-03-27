#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

/* we will sort the array in ascending order and divided it into 2 equal parts. Then we will sort second part in descending order and merge both the parts.

Input array : [3, 5, 2, 7, 9, 1]

Output array : [1, 2, 3, 9, 7, 5] */

void print_arr(int a[], int n)
{
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
}


void sort_half(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        
    }
    int j=0;
    for(int i=(n/2+1); i<=n*3/4; i++)
    {
        int temp=a[i];
        a[i]=a[n-1-j];
        a[n-1-j]=temp;
        j++;
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
    sort_half(a,n);
    return 0;
}