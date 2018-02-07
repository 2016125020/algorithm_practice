#include <iostream>

using namespace std;

int gcd(int a, int b){
	if(b == 0){
		return a;
	}else{
		return gcd(b, a%b);
	}
}

int main(){
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		int t;
		cin >> t;
		int num[t];
		
		for(int i=0; i<t; i++){
			cin >> num[i];
		}
		
		long long total = 0;
		
		for(int i=0; i<t; i++){
			for(int j=i+1; j<t; j++){
				total = total + (long long)gcd(num[i], num[j]);
			}
		}

		cout << total << "\n";
	}

	return 0;
}

