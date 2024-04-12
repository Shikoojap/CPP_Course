/*
 * p1.c
 *
 *  Created on: Aug 19, 2023
 *      Author: dream
 */

#include <iostream>
using namespace std;
int intervals_3(void)
{
	int s1,e1,s2,e2,s3,e3,num,res=0;
	cout<<"Please input the Three intervals:\n ";
	cin>>s1>>e1>>s2>>e2>>s3>>e3;
	cout<<"please enter the number you want to check if is in the intervals or not:\n";
	cin>>num;
	if((num>=s1)&&(num<=e1))
		res++;
	if((num>=s2)&&(num<=e2))
		res++;
	if((num>=s3)&&(num<=e3))
		res++;
	cout<<"the number of intervals is :"<<res<<"\n";
return 0;
}
