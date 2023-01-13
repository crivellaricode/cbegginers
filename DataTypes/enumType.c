#include <stdio.h>

int main(void)
{
    enum gender {male, female};

    enum gender myGender;
    enum gender anotherGender = female;
    
    myGender = male;
    
    _Bool isMale = (myGender == anotherGender);
    
    printf("myGender = %d\n", myGender);
    printf("myGender = %s\n",myGender == male?"male":"female");
    printf("anotherGender isMale = %s\n", isMale == 0 ? "false" : "true");


    return 0;
}
