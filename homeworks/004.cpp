#include <stdio.h>

int main()
{
    const int x = 55;
    int* ptr = (int*)&x;
    *ptr = 99;

    // No syntax error for C and C++, but undefined behaviour.
    printf("x = %d\n", x);
}
