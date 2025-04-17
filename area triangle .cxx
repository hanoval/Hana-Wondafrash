#include <iostream>
using namespace std;
float triangle ( );
int main( )
{
	triangle ( );
	return 0;
}
float triangle ( )
{
	float h,b,a;
	cout<<"enter 2 float number"<<endl;
	cin>>b>>h;
	
	a= b*h/2 ;
	cout<<"A="<<a<<endl;
}
	