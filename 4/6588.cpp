#include <stdio.h>
using namespace std;
const int MAX=1000000;
int main(){
	bool isprime[MAX+1];
	int prime[MAX];
	int cnt=0;
	for(int i=2; i<=MAX; i++){
		if(isprime[i] == false){
			prime[cnt] = i;
			cnt = cnt + 1;
			for(int j=i*2; j<=MAX; j=j+i){
				isprime[j] = true;
			}
		}
	}
	while(1){
		int n;
		scanf("%d", &n);
		if(!n){
			break;
		}
		for(int i=0; i<cnt; i++){
			if(isprime[n-prime[i]] == false){
				//cout << n << " = " << prime[i] << " + " << n-prime[i] << "\n";
				printf("%d = %d + %d\n",n, prime[i], n-prime[i]);
				break;
			}
		}		
	}
}
