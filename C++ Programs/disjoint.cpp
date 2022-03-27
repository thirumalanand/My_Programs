#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


/* Enter Size : 5 4
1 2 3 4 5
6 7 8 9
Disjoint */

int main()
{
    int n,m;
    cout<<"Enter Size : ";
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
            }
        }
    }
    if(!flag) cout<<"Disjoint";
    else cout<<"Not a Disjoint";
    return 0;
}