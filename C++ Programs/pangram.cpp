#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    char str[n];
    int count1=0,count2=0;
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    for(int i=0; i<n; i++)
    {
        if(str[i]==32) continue;
        if(str[i]>96)                   
            count1+=1;  
        else count2+=1;
    }
    if(count1>0&&count2>0) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}
