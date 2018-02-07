//using dynamic programming
#include <iostream>

using namespace std;
//topdown

/*
int savearr[100];
int fibonacci(int n){
	if(n <= 1){
		savearr[n] = n;
		return n;
	}else{
		if(savearr[n] > 0){
			return savearr[n];
		}
		savearr[n] = fibonacci(n-1) + fibonacci(n-2);
		return savearr[n];
	}
}
*/

//bottom up

int fibonacci(int n){
	int savearr[n+1];

	savearr[0] = 0;
	savearr[1] = 1;

	for(int i=2; i<=n; i++){
		savearr[i] = savearr[i-1] + savearr[i-2];
	}

	return savearr[n];
}

int main(){
	int n;
	cin >> n;
	//fibonacci(n);
	cout << fibonacci(n) << "\n";

	return 0;
}
