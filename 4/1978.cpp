#include <iostream>
using namespace std;
int main(){
	int n, cnt=0;
	cin >> n;
	int num[n];
	for(int i=0; i<n; i++){
		cin >> num[i];
		bool isprime = true;
		for(int j=2; j*j<=num[i]; j++){
			if(num[i]%j == 0){
				isprime = false;
				break;
			}
		}
		if(isprime == true && num[i] >= 2){
			cout << "num is " << num[i] << endl;
			cnt++;
		}
	}
	cout << cnt << "\n";
}
