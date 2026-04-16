#include<iostream>
#include<list>

using namespace std;


/*
	list is a doubly linked list 
	hence it can be traversed in both directions
*/


/*
	=,front,back,push_back,push_front,pop_back,pop_front,empty,size,max_size,clear,
	insert,emplace,erase,reverse,sort,merge,splice,unique,remove,remove_if,resize
	
*/
int main(){
	list<int> l{1,2,3,4};

	cout << "The list is empty:" << l.empty() << endl;
	cout << l.size()<<endl;
	cout << l.max_size()<<endl;
	l.erase(l.begin());
	l.insert(l.begin(),1);

	
	for(int x:l){
		cout << x << endl;
	}

	auto arr={1,8,9};
	list<int> l2 = arr;

}
