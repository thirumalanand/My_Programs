#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int l;
    printf("Enter a String\n");
    fgets(str,sizeof(str),stdin);
    l=strlen(str);
    for (int i=l; i>=0; --i)
    {
        printf("%c",str[i]);
    }
    return 0;

}