#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0 ;i<t; i++){
		int n;
		cin >> n;
		int arr[n+1];

		arr[1] = 1;
		arr[2] = 2;
		arr[3] = 4;

		for(int i=4; i<=n; i++){
			arr[i] = arr[i-3] + arr[i-2] + arr[i-1];
		}
		cout << arr[n] << "\n";
	}
}


