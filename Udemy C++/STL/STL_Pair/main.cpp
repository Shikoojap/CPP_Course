/*
 * main.cpp
 *
 *  Created on: Jan 12, 2024
 *      Author: dream
 */
#include<iostream>
using namespace std;

int main(){
	pair<int , string >p;
	p=make_pair(20,"Mahmoud");
	cout<<p.first<<" "<<p.second<<"\n";

	pair<int,pair<int,string>>my_p=make_pair(20,make_pair(20,"Maryuma"));
	cout<<my_p.first<<" "<<my_p.second.first<<" "<<my_p.second.second<<"\n";
	cout<<(p<my_p.second);

	return 0;
}


