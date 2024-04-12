/*
 * last3digits.cpp
 *
 *  Created on: Aug 16, 2023
 *      Author: dream
 */

#include <iostream>
using namespace std;
#include "last3digits.h"

void last_3_digits(void)
{
	int num;
	cout<<"enter the number : ";
	cin>>num;
	if (num<10000)
		cout<<"this is small number \n";
	else
		{
			int digit1=num%10;
			num=num/10;
			int digit2=num%10;
			num=num/10;
			int digit3=num%10;

			int sum=digit1+digit2+digit3;
			if((sum%2)!=0)
				cout<<"this is great number\n";
			else
			{
				bool is_digit1_odd=((digit1%2) ==1);
				bool is_digit2_odd=((digit2%2) ==1);
				bool is_digit3_odd=((digit3%2) ==1);
			if(is_digit1_odd||is_digit2_odd||is_digit3_odd)
				cout<<"this is good number\n";
			else
				cout<<"this is bad number\n";
			}
		}

}
