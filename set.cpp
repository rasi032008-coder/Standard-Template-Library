#include<iostream>
#include<set>
#include<vector>
using namespace std;


/*
	Sets are sorted collection of unique data 
	It is helpful in removing any duplicates


*/
int main(){

	vector <int> v ={1,2,1,3,4,5,6};
	set<int> s={1,2,2};

	s.insert(10);
	
	set<int> s1(v.begin(),v.begin()+7);

	cout << "Elements of s:" << endl;
	for(int x : s){
		cout << x << endl;
	}

	cout << endl << "Elements of s1:\n";
	for(int x : s1){
		cout << x << endl;
	}
}
