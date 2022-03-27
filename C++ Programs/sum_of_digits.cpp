#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Num: ";
    cin>>n;
    int temp=n;
    int sum=0;
    while(temp)
    {
        int digit=temp%10;
        sum+=digit;
        temp=temp/10;
    }
    cout<<sum;
    return 0;
}