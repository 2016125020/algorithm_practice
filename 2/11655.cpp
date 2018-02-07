#include <iostream>

using namespace std;

int main(){
	string s;
	getline(cin,s);

	int len = s.length();

	for(int i=0; i<len; i++){

		int plus13 = (int)s[i] + 13;
		if(s[i] >= 'a' && s[i] <= 'z'){
			if(plus13 > 122){
				plus13 = plus13 - 26;
			}
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			if(plus13 > 90){
				plus13 = plus13 - 26;
			}
		}else{
			cout << s[i];
			continue;
		}
		cout << (char)plus13;
	}

	cout <<"\n";
}
