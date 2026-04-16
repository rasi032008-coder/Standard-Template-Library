#include<deque>
#include<iostream>
using namespace std;

/*

	deque is DOUBLE ENDED QUEUE
	Entry on both ends of the queue
	Unlike vectors the memory is not contiguous
	It comprises of chunks of memories unlike linked_list 
	Takes less time than vector


	It has functions like push_back,push_front,pop_back,pop_front,[],at
*/


int main(){
	deque<int> d;
	d.push_back(1);
	d.push_front(2);
	d.push_front(1);
	d.push_front(0);
	d.pop_back();

	cout << d.at(1) << endl;
	for(int x : d){
		cout << x << endl;
	}
}

