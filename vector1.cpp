#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v={0};

	cout << "Initially v is empty(yes or no ) : "<< v.empty() << endl;
	 
	v.push_back(1);
	v.push_back(2);
	cout << "Size = " << v.size() << endl;
	cout << "Capacity = " << v.capacity() << endl;
	v.push_back(3);

	v.emplace_back(4);
	cout << "First element is " << v[0] << " = " << v.at(0) << endl;
	for(int x : v){
		cout << x << endl;
	}

	v.erase(v.begin()+2);
	v.insert(v.begin()+2,0);
	cout << "Using iterators : "<< endl;

	vector<int>::iterator itr;
	for(itr  =v.begin();itr!=v.end();itr++){
		cout << *(itr) << endl;
	}
	v.pop_back();
	cout << "Printing in reverse order : "<< endl;

	for(vector<int> :: reverse_iterator ritr = v.rbegin() ;ritr!=v.rend();ritr++){
		cout << *(ritr) << endl;
	}
}
