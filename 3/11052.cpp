#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int price[n+1];

	for(int i=1; i<=n; i++){
		int eachprice;
		cin >> eachprice;
		price[i] = eachprice;
	}

	int calprice[n+1];

	for(int i=1; i<=n; i++){
		calprice[i] = price[i];	
	}

	for(int i=1; i<=n; i++){
		for(int j=1 ;j<=n-i; j++){
			if(calprice[i+j] < calprice[i] + price[j]){
				calprice[i+j] = calprice[i] + price[j];
			}
		}
	}

	cout << calprice[n] << endl;
	
}
