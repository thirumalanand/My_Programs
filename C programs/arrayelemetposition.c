#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter a and b\n");
  scanf("%d %d",&a,&b);
  int x[a][b];
  int* ptr;
  ptr=&x[0][1];

  // Taking input using nested for loop
  printf("\nEnter elements of x \n");
  for (int i = 0; i < a; ++i)
    for (int j = 0; j < b; ++j)
    {
      scanf("%d", &x[i][j]);
    }

  for (int i = 0; i < a; ++i)
    for (int j = 0; j < b; ++j)
    {
      printf("\nposition of x[%d][%d] is %p \t",i,j, &x[i][j]);     
    }
  printf("\nptr is pointing to array element in 2nd position which is: %d\t",*ptr);
  return 0;

}