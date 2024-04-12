/*
 * main.cpp
 *
 *  Created on: Jan 12, 2024
 *      Author: dream
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
	tuple<int, char, string> t1, t2;
	t1 = make_tuple(3899, 'M', "Mahmoud");
	t2 = make_tuple(2510, 'M', "Maryuma");
	cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << " \n";

	int id;
	string name;
	char h;
	tie(id, h, name) = t1;
	cout << name;
	return 0;
}
