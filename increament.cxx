#include <iostream>
int main()
{
	int x=10;
	//int y=x++; // y=10 x=11
	int y=++x; // x=11 y=11
	std::cout<<y;
	return 0;
}
