/*
 * main.cpp
 *
 *  Created on: Dec 16, 2023
 *      Author: dream
 */

#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;
const int MAX_BOOKS=10;
const int MAX_USERS=10;
struct book
{
	int id,total_quantity,total_borrowed;
	string name;
	book()
	{
		total_quantity=total_borrowed=0;
		id=-1;
		name="";
	}
	void read (){
		cout << "Enter book info: id & name & total quantity: ";
		cin >> id >> name >> total_quantity;
		total_borrowed = 0;
	}
	bool borrow(){
		if (total_quantity - total_borrowed == 0)
				return false;
			++total_borrowed;
			return true;
	}
	void return_copy(){
			assert(total_borrowed > 0);
			--total_borrowed;
	}
	bool has_prefix(string prefix){
		if (name.size() < prefix.size())
			return false;

		for (int i = 0; i < (int) prefix.size(); ++i) {
			if (prefix[i] != name[i])
				return false;
		}
		return true;
	}
	void print(){
		cout << "id = " << id << " name = " << name << " total_quantity "
				<< total_quantity << " total_borrowed " << total_borrowed
				<< "\n";
	}
	};
struct user{
	int Id;
	string name;
	int borrowed_books_id[MAX_BOOKS];
	int len;
	user(){
		len=0;
		name="";
		Id=-1;
	}
	void read(){
		cout<<"Please Enter yor Name & National ID : ";
		cin>>name>>Id;
	}
	void borrow(int book_id)
	{
		borrowed_books_id[len++]=book_id;
	}
	void return_copy(int book_id){
		bool removed=false;
		for(int i =0;i<len;i++){
			if(borrowed_books_id[i]==book_id){
				for(int j=i;j<len-1;j++){
					borrowed_books_id[j]=borrowed_books_id[j+1];
					len--;
					removed= true;
					break;
				}
			}
		}
		if(!removed)
		{
			cout << "User " << name << " never borrowed book id " << book_id
					<< "\n";
		}
	}
	bool is_book_borrowed(int book_id)
	{
		for(int i=0;i<len;i++)
		{
			if(borrowed_books_id[i]==book_id)
				return true;

		}
		return false;
	}
	void print(){
		// sort what he borrowed
		sort(borrowed_books_id, borrowed_books_id + len);

		cout << "user " << name << " id " << Id << " borrowed books ids: ";
		for (int i = 0; i < len; ++i)
			cout << borrowed_books_id[i] << " ";
		cout << "\n";
	}
};
bool cmp_book_by_name(book &a, book &b) {
	return a.name < b.name;
}

bool cmp_book_by_id(book &a, book &b) {
	return a.id < b.id;
}
struct library_system
{
	int total_books;
	book books[MAX_BOOKS];
	int total_users;
	user users[MAX_USERS];
	library_system()
	{
		total_books=total_users=0;
	}
void run (){
	 while(1)
	 {
		 int choice =menu();
	 if (choice==1)
		 add_book();
	 else if(choice==2)
		 search_books_by_prefix();
	 else if (choice==3)
		 print_who_borrowed_book_by_name();
	 else if (choice==4)
		 print_library_by_id();
	 else if (choice==5)
		 print_library_by_name();
	 else if (choice==6)
			add_user();
	 else if(choice==7)
		 user_borrow_book();
	 else if (choice==8)
		 user_return_book();
	 else if (choice==9)
		 print_all_users();
	 else
		 break;

	 }
 }
int find_user_idx_by_name(string user_name){
	for(int i=0 ; i<total_users;i++)
	{
		if(users[i].name==user_name)
		return i;
	}
	return -1;
}
int find_book_idx_by_name(string book_name){
	for(int i =0;i<total_books;i++)
	{
		if(books[i].name==book_name)
		return i;
	}
	return -1;
}
 int menu()
 {
	 int choice = -1 ;
	 while(choice==-1)
	 {
			cout << "\nLibrary Menu\n";
			cout << "1) add_book\n";
			cout << "2) search_books_by_prefix\n";
			cout << "3) print_who_borrowed_book_by_name\n";
			cout << "4) print_library_by_id\n";
			cout << "5) print_library_by_name\n";
			cout << "6) add_user\n";
			cout << "7) user_borrow_book\n";
			cout << "8) user_return_book\n";
			cout << "9) print_users\n";
			cout << "10) Exit\n";

			cout << "\nEnter your menu choice [1 - 10]: ";
			cin >> choice;

			if (!(1 <= choice && choice <= 10)) {
				cout << "Invalid choice. Try again\n";
				choice = -1;	// loop keep working
			}


	 }
	 return choice;

 }
 void add_book(void) {
 	books[total_books++].read();
 }
 void search_books_by_prefix(){
	string prefix;
	 cout<<"Please enter the book prefix: ";
	 cin>>prefix;
	 char cnt=0;
	 for(int i =0; i<total_books;i++)
	 {
		 if(books[i].has_prefix(prefix))
		 {
			 cout<<books[i].name<<"\n";
			 cnt++;
		 }
	 if(!cnt)
			cout<<"No books with such prefix\n";
	 }


 }
 void add_user(){
	 users[total_users++].read();
 }
 void print_who_borrowed_book_by_name(){
		string book_name;
		cout << "Enter book name: ";
		cin >> book_name;
		int book_idx=find_book_idx_by_name(book_name);
		if (book_idx == -1) {
			cout << "Invalid book name.\n";
			return;
		}
		int book_Id=books[book_idx].id;
		if (books[book_idx].total_borrowed == 0) {
			cout << "No borrowed copies\n";
			return;
		}
		for(int i =0;i<total_users;i++)
		{
			if(users[i].is_book_borrowed(book_Id))
				cout << users[i].name << "\n";
		}
 }
 void print_library_by_id(){
	 sort(books,books+total_books,cmp_book_by_id);
		cout << "\n";
		for (int i = 0; i < total_books; ++i)
			books[i].print();
 }
 void print_library_by_name(){
	sort(books,books+total_books,cmp_book_by_name);
	cout<<"\n";
	for(int i =0 ; i<total_books;i++)
		books[i].print();
 }
 bool read_user_name_and_book_name(int &user_idx,int &book_idx,int num_trials=3){
	 string user_name,book_name;
	 while(num_trials--){
	 cout<<"Please enter your name & name of book you need to borrow: ";
	 cin>>user_name>>book_name;
	user_idx = find_user_idx_by_name(user_name);
	if (user_idx == -1) {
		cout << "Invalid user name. Try again\n";
		continue;
	}
	book_idx = find_book_idx_by_name(book_name);

	if (book_idx == -1) {
		cout << "Invalid book name. Try again\n";
		continue;
	}
	return true;
	 }
	cout<<"You did several trials! Try later.";
	return false;
 }
 void user_borrow_book(){
	 int user_idx,book_idx;
		if (!read_user_name_and_book_name(user_idx, book_idx))
			return;

		int book_id = books[book_idx].id;

		if (!books[book_idx].borrow())
			cout << "No more copies available right now\n";
		else
			users[user_idx].borrow(book_id);
 }
void user_return_book() {
 int user_idx,book_idx;
 	 if(!read_user_name_and_book_name(user_idx, book_idx))
 		 return;
 	 int book_id=books[book_idx].id;
 	 books[book_idx].return_copy();
 	 users[user_idx].return_copy(book_id);
 }
void print_all_users(){
	cout << "\n";
	for(int i =0;i<total_users;i++)
		users[i].print();
}
};
 int main ()
 {
	 library_system lib;
	 lib.run();

	 return 0;
 }

