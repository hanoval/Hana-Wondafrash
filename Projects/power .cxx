#include<iostream>
using namespace std;
int pow (int x,int y);

int main()
{
	int x,n;
	cout<<"enter two numbers..."<<endl;
	cin>>x>>n;
	int power=pow(n,x);
	cout<<"the result is"<<power<<endl;
	return 0;
}
int pow (int x,int n)
{
	int p;
	if(n==1)
	return x;
	else (n==0);
	return 1;
	else (x>1);
	p=pow(n,x);
}