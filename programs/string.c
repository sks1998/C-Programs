#include <stdio.h>

int main()
{
    char array[100];

    printf("Enter a string\n");
    gets( array);

    printf("Your entered string: %s\n", array);
    return 0;
}
