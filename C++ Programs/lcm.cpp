#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int main()
{   int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m=max(max(n1,n2),n3);
    int lcm;
    while(true)
    {
        if(m%n1==0 && m%n2==0 && m%n3==0) {lcm=m; break;}
        m++;
    }
    cout<<"HCF or GCD of "<<n1<<", "<<n2<<" & "<<n3<<" is : "<<lcm;
    return 0;
}