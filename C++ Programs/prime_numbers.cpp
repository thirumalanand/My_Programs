# include <iostream>
using namespace std;

void isprime(int n)
{
    bool flag = true;
    for (int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }

        else continue;

    }

    if(flag==true)
    {
        cout<<n<<"\t is a prime number"<<endl;
    }

    else cout<<n<<"\t is not a prime number"<<endl;
}

int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    isprime(n);

    return 0;
}