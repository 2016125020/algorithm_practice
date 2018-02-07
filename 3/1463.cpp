#include <iostream>

using namespace std;
//topdown

/*
int makingone(int n, int *arr){
	if(n == 1){
		arr[n] = 0;
		return 0;
	}else{
		if(arr[n] > 0){
			return arr[n];
		}
		int renewcase = 0;

		if(n%3 == 0){
			renewcase = arr[n] = makingone(n/3, arr) + 1;
		}
		
		if(n%2 == 0){
			if(renewcase==0 || arr[n] > makingone(n/2, arr) + 1){
				renewcase = arr[n] = makingone(n/2,arr) + 1;
			}
		}

		if(renewcase == 0 || arr[n] >  makingone(n-1,arr) + 1){
			arr[n] = makingone(n-1,arr) + 1;
		}

		return arr[n];
	}
}
		
int main(){
	int n;
	cin >> n;
	int *arr = new int[n+1];
	
	makingone(n, arr);

	cout << arr[n] << "\n";

	for(int i=0; i<n+1; i++){
		cout << i << " : " << arr[i] << "\n";
	}
}
*/

//bottom up

int main(){
	int n;
	cin >> n;

	int arr[n+1];

	arr[1] = 0;

	for(int i = 2; i<=n; i++){
		arr[i] = arr[i-1] + 1;

		if(i%3 == 0 && arr[i] > arr[i/3] + 1){
			arr[i] = arr[i/3] + 1;
		}
		if(i%2 == 0 && arr[i] > arr[i/2] + 1){
			if(arr[i] > arr[i/2] + 1){
				arr[i] = arr[i/2] + 1;
			}
		}
	}

	cout << arr[n] << "\n";
}
