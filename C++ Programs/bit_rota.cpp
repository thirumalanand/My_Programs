#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int main()
{
    int n,m;
    cout<<"Enter Size : ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Type of rotation (1.Left 2.Right) : ";
    cin>>m;
    switch(m)
    {
        case 1:
        {
            int b,fst;
            cout<<"Enter No. of Bits to rotate by: ";
            cin>>b;
            for(int i=0; i<b; i++)
            {
                fst=a[0];
                int j;
                for(j=0; j<n-1; j++)
                {
                    a[j]=a[j+1];
                }
                a[j]=fst;
            }
            for(int i=0; i<n; i++) cout<<a[i]<<" ";
            break;
        }
        case 2: //not working
        {
            int b;
            cout<<"Enter No. of Bits to rotate by: ";
            cin>>b;
            for(int i=0; i<b; i++)
            {
                int lst=a[n-1];
                int j;
                for(j=n-1; j>0; j--)
                {
                    a[j]=a[j-1];
                }
                a[0]=lst;
            }
            for(int i=0; i<n; i++) cout<<a[i]<<" ";
            break;
        }
    }
    return 0;
}