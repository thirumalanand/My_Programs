/* if n=7

      *      
     * *     
    *   *    
   *     *   
  *       *  
 *         * 
*           * */
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++) cout<<" ";
        if(i==1) cout<<"*";
        else
        {
            cout<<"*";
            for(int k=1; k<=2*i-3; k++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}