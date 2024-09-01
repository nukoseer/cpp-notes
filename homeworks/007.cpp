#include <iostream> 

typedef long long mylong;

void func(unsigned mylong) // mylong here is a paramater name. This is same as void func(unsigned int mylong)
{
	std::cout << '1';
}

void func(unsigned long long) 
{
	std::cout << '2';
}

int main() 
{
	func(0ULL); // 2
}
