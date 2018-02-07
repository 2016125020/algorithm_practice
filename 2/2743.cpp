#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int i=0;
	int len=0;
	while(s[i++]){
		len++;
	}

	cout << len << "\n";
}

