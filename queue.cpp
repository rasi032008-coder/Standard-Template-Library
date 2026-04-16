#include<iostream>
#include<queue>
#include<list>
using namespace std;

template<class T>
void display(queue<T> q){
	while(!q.empty()){
		cout << q.front() << endl;
		q.pop();
	}
}


//push,front,back,size,erase,pop,empty

// Queue is First in first out data structure


int main(){
	queue<int> q;
	q.push(1);
	q.push(2);	

	display(q);

	cout << "----------\n";	
	cout <<"Back = "<< q.back() << "	" << "Front = "<< q.front() << endl;
	cout << "Size = "<< q.size() << endl;

	
}


/* 
	You cannot use iterators like begin() and end() for queue




*/
	
