#include <iostream>
#include <deque>
using namespace std;

void print_front(deque<int> &q)
{
	deque<int>::iterator it;
	it = q.begin();
	while (it != q.end())
	{
		cout << *it << " ";
		*it++;
	}
}
void print_end(deque<int> &q){
	deque<int>:: iterator it;
	it = (q.end() - 1);
	while (it !=(q.begin() - 1))
	{

		cout << *it << " ";
		*it--;
	}
	
}
void print_rfront(deque<int> &q)
{
	deque<int>::reverse_iterator it;
	it = (q.rend() - 1) ;
	while (it != q.rbegin() -1)
	{
		cout << *it << " ";
		it--;
	}

}
void print_rend(deque<int> &q){
	deque<int>:: reverse_iterator it;
	it = q.rbegin();
	while (it !=q.rend() )
	{
		cout << *it << " ";
		*it++;
	}
	
}
int main()
{
	deque<int> q;
	q = {1, 2, 3, 4, 5};
	print_front(q);
	cout<<"\n";
	print_end(q);
	cout<<"\n"<<"################"<<"\n";
	print_rfront(q);
	cout<<"\n";
	print_rend(q);
	cout<<"\n"<<"##############"<<"\n";
	for(const auto &val : q )
		cout<<val<<" "; 
	return 0;
}