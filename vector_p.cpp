   #include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &v){
	auto n = v.size();
	unsigned int i,j;
 	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(v.at(j) > v.at(j+1)){
				swap(v[j],v[j+1]);
			}
		}
	}	
} 



void bubbleSort(vector<int> &v,int x){
	for(auto itr = v.begin();itr!=v.end()-1;itr++){
		for(auto j=v.begin();j !=v.end()-1;j++){
			if(*j>*(j+1)){
				swap(*j,*(j+1));
			}
		}
	}
}

void bubbleSort(int a[],int n){
	int i,j;

	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}	
	}
}

int main(){
	vector<int> v = {5,4,3,2,1};
	bubbleSort(v,9);

	for(int i:v){
		cout << i << endl;
	}
}
