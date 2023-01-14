#include <stdio.h>

int main(void)
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company xerox, google, ebay;

    xerox = XEROX;
    google = GOOGLE;
    ebay = EBAY;

    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is %d\n", ebay);
        
    return 0;
}
