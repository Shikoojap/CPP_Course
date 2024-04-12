/*
 * main.cpp
 *
 *  Created on: Jan 4, 2024
 *      Author: dream
 */


#include<iostream>
#include<queue>
#include<deque>
using namespace std;
template <class Type>
void print_queue_elements (priority_queue<Type>&a){
	cout<<"Priority queue elements: ";
	while(!a.empty()){
		cout<<a.top()<<" ";
		a.pop();

	}
	cout<<"\n";
}
template <class Type>
void print_back(deque<Type>&a){
	cout<<"Queue elements (back): ";
	while(!a.empty()){
		cout<<a.back()<<" ";
		a.pop_back();
	}
	cout<<"\n";
}
template <class Type>
void print_front(deque<Type>&b){
	cout<<"Queue elements (front): ";
	while(!b.empty()){
		cout<<b.front()<<" ";
		b.pop_front();
	}
	cout<<"\n";
}
bool is_palindrome(string str="abd"){
	deque<char>q;
	for(char c : str)
		q.push_back(c);
	while(q.size()>1){
		char b=q.back();
		q.pop_back();
		char f=q.front();
		q.pop_front();
		if(b!=f)
			return false;
	}

	return true;
}
int sum=0;
queue<int>stream;
struct last_k_numbers_sum_stream{
	int k;
	last_k_numbers_sum_stream(int _k){
		k= _k;
	}
	int next(int new_num){
		stream.push(new_num);
		sum=sum+new_num;
		if((int)stream.size()>k){
			sum=sum-stream.front();
			cout<<"Debug:"<<stream.front()<<"\n";
			cout<<"Debug"<<sum<<"\n";
			stream.pop();
		}
		return sum;
	}
};
int main(){
	/*
	queue<string> q_names;
	queue<int>q;
	q.push(25);
	q.push(10);
	q.push(20);
	q.push(03);
	cout<<"last Element in the queue: "<<q.back();
	q_names.push((string)"Mahmoud");
	q_names.push((string)"Alaa");
	q_names.push((string)"Maryuma");
	q_names.push((string)"Taha");
	cout<<"\n"<<"last Element in the queue_names: "<<q_names.back()<<"\n";
	while(!q_names.empty()){
		cout<<q_names.front()<<" ";
		q_names.pop();
	}
	cout<<"\n";
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	*/
	/*********************************************************/
	/*priority_queue<int>pq;
	priority_queue<string>pq_names;
	pq.push(10);
	pq.push(-10);
	pq.push(-10);
	pq.push(5);
	pq.push(0);
	pq.push(8);
	pq_names.push((string)"Mahmoud");
	pq_names.push((string)"Alaa");
	pq_names.push((string)"Maryuma");
	pq_names.push((string)"Taha");
	print_queue_elements(pq);
	cout<<"--------------------------"<<"\n";
	print_queue_elements(pq_names);
	*/
	/*********************************************************/
	/*deque<int>q;
	q.push_front(15);
	q.push_front(0);
	q.push_back(55);
	q.push_back(85);
	q.push_back(0);
	q.push_back(338);
	print_front(q);
	deque<string>q_names;
	q_names.push_front((string)"Mahmoud");
	q_names.push_front((string)"Alaa");
	q_names.push_front((string)"Maryuma");
	q_names.push_front((string)"Taha");
	deque<string> q_names_copy=q_names;
	print_back(q_names);
	cout<<"---------------------------------"<<"\n";
	cout<<q_names_copy[1]<<"\n";
	cout<<q_names_copy.at(1)<<"\n";
	cout<<q_names_copy.size()<<"\n";
	cout<<q_names[100]<<"\n";
	*/
/***************************************************************************/
	//cout<<is_palindrome();
	//cout<<is_palindrome("abccba")<<"\n";
	//cout<<is_palindrome("abccba")<<"\n";
	//cout<<is_palindrome("abccba")<<"\n";
/************************************************************************/
	int k,num;
	cout<<"Please enter your maximum stream: ";
	cin>>k;
	last_k_numbers_sum_stream processor(4);
	cout<<"\n"<<"please enter your stream: ";
	while(cin>>num){
		cout<<processor.next(num)<<"\n";
	}
return 0;
}
