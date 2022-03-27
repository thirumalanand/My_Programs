#include<stdio.h>
#include<math.h>

int power(int* p1, int* p2)
{
    return pow(*p1,*p2);
}


int main()
{
    int a,b,result;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&a, &b);
    result=power(&a,&b);
    printf("%d to the power of %d is : %d\n",a,b,result);
    return 0;

}