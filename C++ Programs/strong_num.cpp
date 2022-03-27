#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int fact(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"Enter Num: ";
    cin>>n;
    int temp=n,digit;
    int sum;
    while(temp)
    {
        digit=temp%10;
        sum+=fact(digit);
        temp=temp/10;
    }
    cout<<"Sum= "<<sum<<endl;
    if(sum==n) cout<<"Its a Strong Num";
    else cout<<"Not a Strong Num";
    return 0;
}