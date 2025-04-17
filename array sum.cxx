#include <iostream>
using namespace std;
int num[10];
int main( )
{
	int num[10];
	cout<<"enter 10 no"<<endl;
	for(int i=0;i<=9;i++)
	{
		cin>>num[i];
	}
	int sum=0, i;
		for(int i=0;i<=9;i++)
		{
		sum+=num[i];
		}
		cout<<sum<<endl;	
		return 0;
}
	
