#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int stringlen = s.length();
	for(int i=97; i<=122; i++){
		int cnt = 0;
		for(int j=0; j<=stringlen; j++){
			if((int)s[j] == i){
				cnt++;
			}
		}
		cout << cnt << " ";
	}
	cout << "\n";
}


