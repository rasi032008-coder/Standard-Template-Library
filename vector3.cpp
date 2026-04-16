#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> v = {0,0,3,4};
//	v.push_back(5);
	
	cout << "Size of the vector is " << v.size() << endl;
	cout << "Capacity of the vector is " << v.capacity() << endl;

	
	v.at(0) = 1;
	v[1] = 2;

//	v.begin() v.end()  are iterators

	v.erase(v.begin());//deletes beginning element
	v.insert(v.begin(),1);//inserts 1 in the beginning
	v.insert(v.begin()+7,5);//It will not throw an error 
	v.insert(v.end(),6);

	v.reserve(100);
	cout << "Capacity of v = " << v.capacity() << endl;
	for(int x:v){
		cout << x << endl;
	}

	v.clear();
	
}

/*

Do bubble sort using vectors

*/
