int foo(int *p, int *q)
{
	*p = 1;
	*q = 2;
	
	return *p + *q;
}

char str[] = "0123";

#include <iostream>

int main()
{
	using namespace std;

	int a = 3;
	int b = 4;
	int c = foo(&a, &a); // a will be 2 and c will be 4 after this call.
	cout << c;  // 4
	(c == a + b ? a : b) = 5; // b = 5;
	cout << a << b; // 25
	int i = 0;
	str[i] = i[str + 2];
	cout << str; // 2123

    // 4252123
} 
