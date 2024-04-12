/*
 * main.cpp
 *
 *  Created on: Aug 19, 2023
 *      Author: dream
 */
#include <iostream>
using namespace std;

int main()
{
	/************divisible number by 3******************/
	/*int end,start=0;
	cout<<"enter the number : ";
	cin>>end;
	while(start<=end)
	{
		if(start%3==0)
			cout<<start<<" ";

			start+=1;
	}*/
/*****************************Number of Digits and Nested LOOP **********************/
	/*int T,num,digits,num_T,divisor;
	divisor=10;
	cout<< "enter the number of Retries: ";
	cin>>T;
	while(T>0)
	{
		cout<<"enter the number you want to calculateit's digits:";
		cin>>num;
		num_T=num;
		if(num==0)
			digits =1;
		else if(num==-2147483648)
			digits=10;
		else
			while(num!=0)
			{
				digits++;
				num/=divisor;
			}
		cout<<"#of digits of "<<num_T<<" is "<<digits<<"\n";
		T--;
	}*/

/***************************Med HW P1*********************/

	int t = 0;
	for (int c = 0; c < 3; ++c) {
		for (int var = 0; var < 4; ++var)
			for (int h = 0; h < 2; ++h)
				++t;
			++t;
		++t;
	}
	cout << t;

	return 0;
}



