#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];

	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		arr[i] = a;
	}
	
	int lenarr[n];

	for(int i=0; i<n; i++){
		lenarr[i] = 1;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(arr[j] < arr[i] && lenarr[i] < lenarr[j]+1){
				lenarr[i] = lenarr[j] + 1;
			}
		}
	}


/*
	for(int i=0; i<n; i++){
		cout << lenarr[i] << endl;
	}
*/
	sort(lenarr, lenarr+n-1);

	cout << lenarr[n-1] << endl;
			
}
