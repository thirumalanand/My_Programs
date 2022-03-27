#include <stdio.h>

void main()
{
    int n;
    int ar[100];
   
    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
   
    printf("Input %d number of elements in the array :\n",n);
    for(int i=0;i<n;i++)
      {
	    printf("element - %d : ",i);
	    scanf("%d",&ar[i]);
	  }

    printf("The Reverse order of the array is:\n");

    for(int i=(n-1); i>=0; i--)
    {
        printf("%d\t",ar[i]);
    }

}