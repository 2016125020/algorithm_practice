#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int len = s.length();
	stack <int> s2, s8;
	for(int i=0; i<len; i++){
		s2.push((int)(s[i]-48));
	}
	int sum;
	while(!s2.empty()){
		sum = 0;
		for(int i=0; i<3; i++){
			sum = sum + s2.top() * pow(2, i);
			s2.pop();
			if(s2.empty()){
				break;
			}
		}
		s8.push(sum);
	}
	while(!s8.empty()){
		cout << s8.top();
		s8.pop();
	}
	cout << "\n";
	return 0;
}
