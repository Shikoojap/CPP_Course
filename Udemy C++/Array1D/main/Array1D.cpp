//============================================================================
// Name        : Array1D.cpp
// Author      : Mahmoud ELTANTAWY
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sum(int arr[1],int len)
{
	int sum;
	sum=arr[2]++;
	return sum;
	}
/*int main() {
	int arr [3]{0,1,4};
	int res=sum(arr,3);
	cout<<arr[2];
	/*
	const int SIZE = 5;
	int numbers[SIZE] { 1, 2, 4, 3, 10 };

	int cnt = 0;

	for (int i = 1; i < SIZE; ++i) {
		if (numbers[i - 1] < numbers[i] && numbers[i] < numbers[i + 1])
			cnt++;
	}
	cout << cnt << "\n";*/
	/*******Find Max and 2 max number within 200 number*/

	/*int n, temp,num[200];
	cout<<"please enter total numbers of array, please make sure that no exceed the limit 200 :  ";
	cin>> n;
	cout<< "\n please enter numbers of array: ";
	for(int i=0;i<n;++i)
		cin>>num[i];

	for(int i=0;i<n-1;++i)
	{
		for(int j=1; j<n;++j)
		{
			if(num[j-1]>num[j])
			{
				temp=num[j];
				num[j]=num[j-1];
				num[j-1]=temp;
			}
		}
	}
	cout<<"\n First maximum number in Array is: "<<num[n-1]<<"\n second maximum number in Array is: "<<num[n-2];

*/

/*
	return 0;

}*/
void f1(int arr[10][20][30][40]) {}
void f2(int arr[][20][30][40]) {}
void f3(int arr[20][30][40]) {}
void f4(int arr[30][40]) {}
void f5(int arr[][40]) {}

int main() {
 int arr[10][20][30][40];

 f1(arr);
 f2(arr);
 f3(arr[0]);
 f4(arr[0][0]);
 f5(arr[0][0]);

return 0;
}
