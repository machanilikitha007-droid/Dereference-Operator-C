#include <stdio.h>

int main()
{
    int number = 85;
    int *ptr = &number;

    printf("Original value: %d\n", number);
    printf("Value using dereference operator: %d\n", *ptr);

    *ptr = 120;

    printf("Value after modifying through pointer: %d\n", number);

    return 0;
}
