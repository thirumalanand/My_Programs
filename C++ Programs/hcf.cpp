#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int main()
{   int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m=min(min(n1,n2),n3);
    int gcd;
    for(int i=1; i<=m; i++)
    {
        if(n1%i==0 && n2%i==0 && n3%i==0) gcd=i;
    }
    cout<<"HCF or GCD of "<<n1<<", "<<n2<<"& "<<n3<<" is : "<<gcd;
    return 0;
}