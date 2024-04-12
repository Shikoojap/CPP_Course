/*
 * Min_of_3_Num.cpp
 *
 *  Created on: Aug 12, 2023
 *      Author: dream
 */

#include <iostream>
using namespace std;
#include "min_of_3_nm.h"

 int min(void)
{
	 int num1,num2,num3,answer;
cout<<"please enter the 3 numbers: \n";
cin>>num1>>num2>>num3;
answer=num1;
if(num2<answer)
	answer=num2;
if(num3<answer)
	answer=num3;
cout<<"the number is: "<<answer;
return 0;
}
