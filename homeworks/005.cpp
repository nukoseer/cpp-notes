#include <stdio.h>

int main()
{
     // In C++ this will print true. In C, if stdbool.h is not included this will print false otherwise true.
#if true
	printf("true\n");
#else
	printf("false\n");
#endif
}
