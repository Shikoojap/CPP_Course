#include <iostream>
using namespace std;
#include "simple_calc.h"
int calc(void)
{
int numb1, numb2;
char op;
cout<< "please enter the two numbers:\n";
cin>>numb1>>numb2;
cout<< "please enter the operation:\n";
cin>>op;
if(op=='/')
	cout<<"Dividation is: "<<numb1/numb2<<"\n";
else if(op=='*')
	cout<<"Multiplication is: "<<numb1*numb2<<"\n";
else if(op=='+')
	cout<<"Addition is: "<<numb1+numb2<<"\n";
else if (op=='-')
	cout<<"Subtraction is: "<<numb1-numb2<<"\n";
else
	cout<<"invalid operation ";

return 0;
}
