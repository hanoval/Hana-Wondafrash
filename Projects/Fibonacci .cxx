#include <iostream>
using namespace std;
int fibonacci (int n );
if (n<=1)
return n; 
int main( )
{
	  int n;
	 fibonacci (n );
	 return 0;	
}
int fibonacci(int n)
{
	int n,f;
	cout<<"enter a number"<<endl;
	cin>>n;
	if (n==0)
	return 0;
	else(n==1);
	return 1;
	else (n>1);
    return  fibonacci(n)=fibonacci(n-1)+fibonacci(n-2);
	cout<<"result"<<f<<endl;
}