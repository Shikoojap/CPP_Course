#include<iostream>
#include<string>
 using namespace std;

 int main (){

    string letter = {"i#still#love#you#maryuma"};
       cout<<letter.substr(3,9)<<"\n ";
    cout<<letter.substr(3)<<"\n";
    cout<<letter.substr(3,9)<<"\n";
    cout<<letter.find_first_of("still")<<"\n";
    cout<<letter.find_last_of("still")<<"\n";
    cout<<letter.find_first_not_of("mau")<<"\n";
    cout<<letter.find_last_not_of("mo")<<"\n";
    cout<<letter.replace(3,1,"mo")<<"\n";
    return 0;
 }