int main()
{
	int x = 10;
	int y = 20;
	
	int * const p1 = &x; // const pointer to int. Valid in C and C++.
	const int *p2 = &x; // pointer to const int. Invalid in C++, no implicit conversion from const T* to T*. Valid in C.
	int const *p3 = &x; // pointer to const int. Invalid in C++, no implicit conversion from const T* to T*. Valid in C.
	const int* const p4 = &x; // const pointer to const int. Invalid in C++, no implicit conversion from const T* to T*. Valid in C.

	*p1 = 40; // Valid in C and C++.
	p1 = &y; // Invalid in C and C++. Cannot change const pointer.

	*p2 = 40; // Invalid in C and C++. Cannot change the value because it is const int.
	p2 = &y; // Valid in C and C++.

	*p3 = 40; // Invalid in C and C++. Cannot change the value because it is const int.
	p3 = &y; // Valid in C and C++.

	*p4 = 40; // Invaild in C and C++. Cannot change the value because it is const int.
	p4 = &y;  // Invalid in C and C++. Cannot change const pointer.
}
