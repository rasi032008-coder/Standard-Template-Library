#include<iostream>
#include<list>
using namespace std;

//It has all the functions as that of the vector container with some exceptions

int main(){
	list<int> l;
	l.push_back(1);
	l.push_front(0);
	
	l.pop_back();
	l.pop_front();

	l.push_back(2);
	cout << l.size() << " is the size of list" << endl;

	l.push_back(3);

	cout << "First element :" << l.front() << endl;
	cout << "Last element :" << l.back() << endl;
	for(int i:l){
		cout << i << " " ;
	}
	
	l.clear();
	cout << endl;
}

	//try the following
//	cout << l.capacity() << " is the capacity of list" << endl;
