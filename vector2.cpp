#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> v1;
	
	if( v1.empty()){//returns 1 or 0
		cout << "Vector v1 is empty" << endl;
	}
	
	
	v1.push_back(1);//Adds element at the back
	v1.push_back(2);	


	v1.emplace_back(90);

	
	v1.pop_back();//deletes the last element


	cout << v1.front() << endl ;//returns first value
	cout << v1.back() << endl;//returns last value 


	for(int &x : v1){
		cout << x << endl;
	}

	v1.clear();

	for(int x : v1){
		cout << x;
	}	
}

// emplace function is slightly different from push_back



