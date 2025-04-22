#include <iostream>
using namespace std;
int main()
{
double sales=95000;
cout<<"sales=$"<<sales<<endl;

double stateTaxRate=0.04;
double stateTax=sales*stateTaxRate;
cout<<"state tax=$"<<stateTax<<endl;

double countryTaxRate=0.02;
double countyTax=sales*countryTaxRate;
cout<<"county tax=$"<<countyTax<<endl;

double t=stateTax+countyTax;
cout<<"total tax="<<t;
return 0;	
}