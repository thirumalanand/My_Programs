//Enter your code here. Read input from STDIN. Print your output to STDOUT
#include <iostream>
#include <string.h>
using namespace std;
/*
void check(char b[20], char v[20])
{
	int count=1,i,j;
	int x,y;
	x=strlen(v);
	y=strlen(b);
	for(i=0; i<y; i++)
	{
		for(j=0; j<x; j++)
		{
			if(b[i]==v[j]) count=+1;
		}
	}
	if(count==strlen(b)) cout<<"POSITIVE"<<endl;
	else cout<<"NEGATIVE"<<endl;
}


int main()
{
	char v[20];
	int n;
	char b[20];
	cin.get(v,20);
	cin>>n;
	for(int i=1; i=n; i++)
	{
		cin>>b;
		check(b,v);
	}
	return 0;
}
*/
/*
void sort(int arr[],int len)
{
	int x=0,y=0;
	for(x=0; x<len; x++)
	{
		int min=x;
		for(y=x;y<len;y++)
		{
			if(arr[min]>arr[y]) min=y;

		}
		int temp=arr[x];
		arr[x]=arr[min];
		arr[min]=temp;
	}
	for(int i=0; i<len; i++)
	{
		cout<<arr[i]<<" ";
	}

}

int main()
{
	int len;
	cin>>len;
	int arr[len];
	for(int i=0; i<len; i++)
	{
		cin>>arr[i];
	}
	sort(arr,len);
	
	return 0;
}
*/
/*
class IndiaBix
{
    static int x; 
    public:
    static void SetData(int xx)
    {
        x = xx; 
    }
    static void Display() 
    {
        cout<< x ;
    }
};
int IndiaBix::x = 0; 
int main()
{
    IndiaBix::SetData(44);
    IndiaBix::Display();
    return 0; 
}
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i=0;
	while(i=0)
	{cout<<i;i++;}
	cout<<i+10;
    return 0;
}
