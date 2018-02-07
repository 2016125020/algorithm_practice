#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int slength = s.length();
	for(int i=97; i<=122; i++){
		for(int j=0; j<=slength; j++){
			if((int)s[j] == i){
				cout << j << " ";
				break;
			}
			if(j == slength){
				cout << "-1 ";
			}
		}
	}
	cout <<"\n";
}
