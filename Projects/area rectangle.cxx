#include <iostream>
using namespace std;
float rectangle(float h,float w);
int main( )
{
	float h,w;
	rectangle (h,w);
	return 0;
}
float rectangle(float h,float w)
{
	float a;
	cout<<"enter 2 number"<<endl;
	cin>>h>>w;
	a=h*w;
	cout<<"A="<<a<<endl;
}