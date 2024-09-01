#include <stdlib.h>

enum Color {Blue, Red, Yellow};  // Valid.
enum Fruit {Apple, Melon, Mango}; // Valid.

foo(int, int); // Valid in C (before C99), invalid in C++. C compilers will assume that foo() returns int.
int func(); // In C, this means there is no information about arguments so we can pass everything. In C++, this is same as int func(void);

double sum(a, b)
double a, b; // This is valid in C but invalid in C++.
{
	return a + b;
}

int f(int x, int) // In C, nameless parameters are not allowed in the definition, but in C++ this is valid.
{
	return x * x;
}

int g1 = func(); // Invalid in C, static objects must be initialized with constant expressions. Valid in C++.
const int g2; // Invalid in C++, const objects cannot be default initialized. Valid in C.

int main()
{
	const int ci1; // const objects cannot be default initialized in C++.
	const int ci2 = func(); // Valid in C and C++.
	const c3 = 123; // Invalid in C++, valid in C (implicit int).
	char *p1 = "test"; // Invalid in C++, "necati" will be decayed to const char*. Valid in C.
	int i1 = 12.5; // Valid in C and C++, implicit conversion from double to int.
	int i2 = Red; // Valid in C and C++. Implicit conversion from enumeration types to arithmetic types is allowed.

	enum Color color1 = 2; // Invalid in C++, Implicit conversion from arithmetic types to enumeration type is not allowed. Valid in C.
	enum Color color2 = 19; // Invalid in C++, Valid in C.
	enum Color color3 = Mango; // Invalid in C++, Implicit conversion between different enumeration types is not allowed. Valid in C.
  
	char str[3] = "test"; // Invalid in C++, there should be enough place to place null terminator. Valid in C.
	enum Color color = Red;
	++color; // Invalid in C++, there is no default postfix prefix ++ operator defined for enumeration types. Valid in C.
	Fruit f = Mango; // Valid in C++. Invalid in C, typedef declaration is necessary if enum keyword is not used before tag name.
	const int cx = 10;
	int ival = 56;
	func(ival); // Invalid in C++, function doesn't take any parameters. Valid in C, function takes unknown number of parameters.
	int *ptr = &cx; // Invalid in C++, no implicit conversion from const T* to T*. Valid in C.
	char *cptr = &ival; // Invalid in C++, no implicit conversion between different pointer types. Valid in C.
	const int *p2 = &ival; // Valid.
	int *p3 = malloc(10 * sizeof(int)); // Invalid in C++, no implicit conversion from void* to T*. Valid in C.
	int *p4 = 0; // Valid.
	int *p5 = NULL; // Valid.
}
