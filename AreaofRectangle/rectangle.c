#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *nameProgram = argv[0];
    char *heightArgument = argv[1];
    char *widthArgument = argv[2];
    double height, width;
    double perimeter = 0.0, area = 0.0;

    if(numberOfArguments < 3)
    {
        printf("Enter height: ");
        scanf("%lf", &height);
        printf("Enter width: ");
        scanf("%lf", &width);
    }
    else
    {
        height = atof(argv[1]);
        width = atof(argv[2]);
    }

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("\nHeight = %.2f\nWidth = %.2f\nPerimeter = %.2f\n", height, width, perimeter);
    printf("\nHeight = %.2f\nWidth = %.2f\nArea = %.2f\n", height, width, area);

    return 0;
}
