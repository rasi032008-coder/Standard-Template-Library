#include<iostream>
#include<map>

using namespace std;


/*

	Map uses trees as its data structure.
	Map is used to have one key and one value.
	There cannot be two identical keys but there can be two different keys for one value.
	As it uses trees, the time complexity is O(log(n)).
	Test the output and check if you notice anything peculiar.

*/

int main(){
	map<string,int> m1;
	map<int,string> m2;

	m1["Praveen"] = 2025103621;
	m1["Ahmed"] = 2025103627;
	m1["Rashif"] = 2025103627;
	m1["Kishore"] = 2025103630;

	m2[2025103621] = "Praveen";
	m2[2025103627] = "Rashif";
	
	m2[2025103630] = "Kishore";

	
	for(pair<string,int> p : m1){
		cout << p.first << "\t" << p.second << endl;
	}

	cout << endl;
	for(auto p :m2){
		cout << p.first << "\t" << p.second << endl;
	}

	
	
}


/*
	Output:
		Kishore 2025103630
		Praveen 2025103621
		Rashif  2025103627
		
		2025103621      Praveen
		2025103627      Rashif
		2025103630      Kishore
*/
