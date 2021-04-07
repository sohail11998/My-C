#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the two numbers to compare: ");
    scanf("%d %d",&a,&b);
    c = a==b;
    printf("Entered numbers are %d and %d.\n",a,b);
    printf("Output: %d\n",c);
    printf("Numbers are equal if the output is '1' and unequal if output is '0'");
    return 0;
}
