/* input1=190
input2=267
input3=853
then PIN=9150
PIN should be 4 digit
units digit=least of units position of three input numbers
tens digit=least of tens position of three input numbers
hundreds digit=least of hundreds position of three input numbers
thousands digit=maximum of all the digits in three input numbers. */



#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int passwrd(int i1, int i2, int i3)
{
    int t1=i1, t2=i2, t3=i3;
    int pin=0;
    int ones=min(min(i1%10, i2%10), i3%10);
    int a=max(max(i1%10, i2%10), i3%10);
    i1/=10; i2/=10; i3/=10;
    int tens=min(min(i1%10, i2%10), i3%10);
    int b=max(max(i1%10, i2%10), i3%10);
    i1/=10; i2/=10; i3/=10;
    int huns=min(min(i1%10, i2%10), i3%10);
    int c=max(max(i1%10, i2%10), i3%10);
    int d=max(max(a,b),c);
    i1=t1; i2=t2; i3=t3;
    return (d*1000+huns*100+tens*10+ones);
}


int main()
{
    int i1=123;
    int i2=582, i3=175;
    cout<<passwrd(i1,i2,i3);
    cout<<endl;
}