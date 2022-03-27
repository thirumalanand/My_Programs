#include <stdio.h>

int rev(int n)
{
    int d, res=0;
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    return res;

}

int main()
{
    int n=1234;
    printf("The initial number is : %d\n",n);
    printf("The Reverse is : %d\n",rev(n));
    return 0;
}