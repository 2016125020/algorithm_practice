#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	int len = s.length();

	string strsub[len];
	
	for(int i=0; i<len; i++){
		strsub[i] = s.substr(i, len-i);
	}

	sort(strsub, strsub+len);

	for(int i=0; i<len; i++){
		cout << strsub[i] << "\n";
	}
	
	return 0;
}

