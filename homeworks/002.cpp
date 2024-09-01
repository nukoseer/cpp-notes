#include <stdio.h>

int test = 0;

int main()
{
	struct test {
		char str[64];
	};

     // Valid in C and C++. In C, prints 4 (assuming int is 4 byte), in C++ prints 64.
    // In C you cannot use the tag name as a type name without typedef declaration, name lookup will
    // find int test;. In C++, this will cause name shadowing and name lookup will find struct test;.
    printf("sizeof(test) = %zu\n", sizeof(test));
}
