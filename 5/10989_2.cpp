#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int cnt [10001] = { 0 };
	int a;
	for(int i=0; i<n; i++){
		cin >> a;
		cnt[a] ++;
	}
	for(int i=0; i<10001; i++){
		if(cnt[i] > 0){
			for(int j=0; j<cnt[i]; j++){
				cout << i << "\n";
			}
		}
	}
}
