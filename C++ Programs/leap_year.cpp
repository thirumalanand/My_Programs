#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Year: ";
    cin>>n;
    if( (n%4==0 && n%100!=0) || n%400==0 ) cout<<"Leap Year";
    else cout<<"Not a Leap Year";
    return 0;
}