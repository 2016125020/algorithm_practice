#include <iostream>
using namespace std;

int main(){
	int m,n;
	cin >> m >> n;
	bool isprime[n+1];
	isprime[0] = isprime[1] = false;
	for(int i=2; i<=n; i++){
		isprime[i] = true;
	}

	for(int i=2; i*i<=n; i++){
		if(isprime[i] == true){
			for(int j=2*i; j<=n; j=j+i){
				isprime[j] = false;
			}
		}
	}

	for(int i=m; i<=n; i++){
		if(isprime[i]== true){
			cout << i << endl;
		}
	}
}
		
