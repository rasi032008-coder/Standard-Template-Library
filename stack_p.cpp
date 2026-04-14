#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int checkParanthesis(string str){
	stack<char> s;
	for(char c : str){
		if(c=='{' || c =='[' || c=='('){
			s.push(c);
		}

		else if (c=='}' && s.top() == '{') s.pop();

		else if (c==')' && s.top() == '(') s.pop();

		else if (c==']' && s.top() == '[') s.pop();

		else return 0;
	}	

	return 1;
	
}

int main(){



	string s = "{[]}";
	cout << checkParanthesis(s);//Output is 1
}
