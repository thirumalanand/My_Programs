#include<stdio.h>
int main ()
{
  float length, breath, side, height, radius;
  float area;
  int fig_code;
  float pi = 3.14;
  printf("1 circle\n");
  printf("2 rectangle\n");
  printf("3 square\n");
  printf("enter the figure code\n");
  scanf("%d", &fig_code);
  switch (fig_code)
    {
    case 1:printf ("enter the values of raius\n");
      scanf ("%f", &radius);
      area = 2 * radius;
      printf ("area=%f\n", area);
      break;

    case 2:printf ("enter the values of length, breath and height\n");
      scanf ("%f%f%f", &length, &breath, &height);
      area = length * breath * height;
      printf ("area=%f\n", area);
      break;
    case 3:printf ("enter the values of length and breath\n");
      scanf ("%f%f", &length, &breath);
      area = (length*breath);
      printf ("area=%f\n", area);
      break;
    }

}