#include <stdio.h>
#include <stdbool.h>
int main()
{
    int integerVar = 100;
    float floatingVar = 331.79f;
    double doubleVar = 8.44e+11; // 844000000000.000000
    _Bool boolVar = 1;          // 1 is true 0 is false
    bool myBoolVar = false;     // stdbool.h C89 true or false

    printf("integerVar = %d\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %lf\n", doubleVar);
    printf("boolVar = %d\n", boolVar);
    printf("myBoolVar = %d\n", myBoolVar);

    return 0;
}
