#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	string s;
	cin >> s >> n;

	int len = s.length();
	int total = 0;
	for(int i=0; i<len; i++){
		int numcvs;
		if(s[i] >='A' && s[i] <= 'Z'){
			numcvs = (int)(s[i]-55);
		}else{
			numcvs = (int)(s[i]-48);
		}
		total = total + numcvs * pow(n, len-i-1);
	}

	cout << total << "\n";
	return 0;
}
	

