/* 
4
*******
 *****
  ***
   * 
*/

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int main()
{   int n;
    cin>>n;
    cout<<endl;
    int k=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*n-k; j++)
        {
            cout<<"*";
        }
        k+=2;
        cout<<endl;
    }

    return 0;
}