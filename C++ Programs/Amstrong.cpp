#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,sum=0;
	int count=0;
	cout<<"Enter a NUmber"<<endl;
	cin>>n;
	int temp=n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	n=temp;

	while(n!=0)
	{
		sum=sum+pow((n%10),count);
		n=n/10;
	}
	if(sum==temp)
	{
		cout<<"Amstrrong Number"<<endl;
	}
	else cout<<"Not Amstrong"<<endl;

	return 0;

}
