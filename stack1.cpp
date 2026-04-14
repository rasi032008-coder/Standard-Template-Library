#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//Last in first out

//empty,push,size,pop,top

//It has no iterators

//Solve the valid paranthesis problem
template<class T,class U=void>
void display(stack<T,U> s ){
	while(!s.empty()){
		cout << s.top() <<endl;
		
		s.pop();
	}
}


int main(){
	stack<int> s;

	for(int x:{1}){
		s.push(x);
	}
	
	cout << s.size()<< " is the size of s\n";
	display(s);
}
