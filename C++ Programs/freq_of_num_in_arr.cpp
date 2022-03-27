#include <iostream>
using namespace std;


int main()
{
    int ar[7]={10,30,30,10,10,40,50};
    int vis[7];
    
    for(int i=0; i<7; i++)
    {
        int count=0;
        if(vis[i]==1) continue;
        for(int j=i+1; j<7; j++)
        {
            if(ar[i]==ar[j]) {count++; vis[j]=1;}
        }
        cout<<"count of "<<ar[i]<<" is "<<count+1<<endl;
    }

    return 0;
}