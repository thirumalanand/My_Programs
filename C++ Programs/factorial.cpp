#include <iostream>
using namespace std;

int main()
{
    int num,fact=1;
    cout<<"Enter a number : ";
    cin>>num;
    while(num>=1)
    {
        fact=fact*num;
        num--;
    }
    cout<<"\nThe Factorial is : "<<fact;
    return 0;
}