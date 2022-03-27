//You are given a number NN and you are asked to output an N \times NN×N matrix consisting of numbers from 11 to N \times NN×N according to a given pattern.
//1
//4
//Sample Output 0

//1 2 4 7
//3 5 8 11
//6 9 12 14
//10 13 15 16


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
void disp(int n)
{
    for(int i=1; i<=(n*n); i++)
    {
        for(int j=i ;j<=n ;j=2*j)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
    


int main() {
    int t;
    cin>>t;
    int ar1[t];
    for(int i=0; i<t; i++)
    {
        cin>>ar1[i];
    }
    int n;
    for(int i=0; i<t; i++)
    {
        n=ar1[i];
        disp(n);
    }
    return 0;
}
*/


int main () {
int T;
cin>>T;
for (int k =0;k<T;k++){
int i=0;
int N;
cin>>N;

for (int temp1 =1; temp1<=N; temp1++){
    i = i + temp1;
    int j;
    cout<<i<<" ";
    j =i;
    int temp = temp1;
    for (int temp2 =1;temp2<=(N-temp1);temp2++){     
    j = j + temp;  
    cout<<j<<  " ";
    temp++;
    
    }

    if (temp1<N){
       int temp3 =temp-1;
        for(int temp2 =1; temp2<=(temp1-1); temp2++){
           
            j=j + temp3 ;
            temp3--;
           
            cout<<j<<" ";
            
        }
        
    }
    else if (temp1=N){
         
         int temp3 = temp -1;
        for (int temp2 =1 ;temp2<temp1; temp2++){
            j= j +temp3;
            temp3--;
            cout<<j<<" ";
        }
    } 

    cout<<endl;
}
}
return 0;

}