#include <iostream>
using namespace std;
float line(float m,float x,float b);
int main( )
{
	 float m,x,b;
	 line(m,x,b);
	 return 0;	
}
float line(float m,float x,float b)
{
	int a;
	cout<<"enter 3 numbers"<<endl;
	cin>>m>>x>>b;
	a=m*x+b;
	cout<<"y="<<a<<endl;
}