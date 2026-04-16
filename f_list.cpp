#include<iostream>
#include<forward_list>

using namespace std;

/*

	It is a singly linked list allowing us to add only from front
	


*/

int main(){
	forward_list <int> f={1,2};
	f.push_front(1);
	f.push_front(2);

	f.pop_front();

	cout << "First element " <<  *(f.begin()) << endl;
//	cout << "Last element " << *(f.end()) << endl;
//??

	for(int x : f){
		cout << x << endl;
	}
}
