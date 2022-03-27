#include <stdio.h>

typedef struct
{
    char brand[20];
    char model[30];
    float cc;
    int year;
}bike;

int main()
{
    bike b1 = {"Yamaha", "R6", 601.2, 2019};
    bike b2 = {"Kawasaki", "Ninja 650", 646.5, 2019};

    printf("The 1 st bike is a %d %s %s which has a %.1fcc engine\n", b1.year, b1.brand, b1.model, b1.cc);
    printf("The 2 nd bike is a %d %s %s which has a %.1fcc engine\n", b2.year, b2.brand, b2.model, b2.cc);

    return 0;
}