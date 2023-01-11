#include <stdio.h>

int main()
{
    char str[100];
    int i;
    double x;

    printf("Enter your name, age and weight: ");
    scanf("%s %d %lf", str, &i, &x);

    printf("\nHello %s, you have %d years old and your weight is %.2lf\n", str, i, x);

    return 0;
}
