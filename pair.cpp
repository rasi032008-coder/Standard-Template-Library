#include<iostream>
#include<vector>
using namespace std;


/*

	Pair consists of two heterogenous or homogeneous data
	Pair can be combined efficiently with other data structures like map
	Functions include make_pair
	





*/



int main(){
	pair<int,int> p ;

	p.first = 1;
	p.second = 2;
	

	vector<pair<int,int>> v;

	v.push_back({1,2});
	
	v.emplace_back(1,2);
	v.emplace_back(2,1);
	for(pair<int,int> p : v){
		cout << "First = " << p.first << " Second = " << p.second<<endl;
	}
}
