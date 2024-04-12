/*
 * main.cpp
 *
 *  Created on: Jan 1, 2024
 *      Author: Mahmoud ELTANTAWY
 */
#include<iostream>
using namespace std;
//template<typename Type>
//template<class Type1 , typename Type2 >
//Type1 Mymax (Type1 a, Type2 b){
//	if(a>b)
//		return a;
//	return b;
//}
/*
template <class T>

T add(T a,T b)
{
	return a+b;
}
template <class T>
T multiply (T a,int factor)
{

return a*factor;
}
template<>
	string multiply (string a , int factor)
{
	string res;
	while(factor--)
		res+=a;
	return res;
}
int main (){
	string s="Maryuma";
	cout <<add(5,7)<<"\n";
	cout<<multiply(s,4);

	return 0;
}
*/
/***************************************************************/
/*
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
void fun(T a) {
	cout << "[" << a << "]";
}

template<>
void fun(string str) {
	cout << "{{" << str << "}}";

	//return str.size();
}

int main() {
	fun(10.5), fun("mostafa");

	return 0;
}
*/
/***************************************************************************/

#include<iostream>
#include<Algorithm>
using namespace std;
template <typename T,int SIZE>
struct MyQueue {
	T arr[SIZE];
	int pos;
	MyQueue(){ pos=0;}
	MyQueue(T arr_param[],int len){
		for(int i=0;i<len;i++)
		{
			arr[i]=arr_param;
		}
		pos=len;
	}
	void add_front(T elem){
		arr[pos++]=elem;
	}
template <class Type >

void sum_and_add(Type a , Type b){
	arr[pos++]=a+b;
}
void print(){
	for(int i =0;i<pos;i++)
		cout<<arr[i]<<"\n";
			}
};

int main ()
{
	MyQueue<string,12>qrs;
	qrs.sum_and_add((string)"Mostafa ",(string)"Saad");
	qrs.print();
	return 0;
}
