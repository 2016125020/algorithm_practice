#include <iostream>
using namespace std;
int findzero(int n){
	int cnt5=0, cnt2=0;
	for(int i=2; i<=n; i++){
		int num = i;
		while(num % 2 == 0){
			cnt2++;
			num = num/2;
		}while(num % 5 == 0){
			cnt5++;
			num = num/5;
		}
	}
	if(cnt2 > cnt5){
		return cnt5;
	}else{
		return cnt2;
	}
}
			

int main(){
	int n,m;
	cin >> n >> m;
	/*
	cout << findzero(n) << endl;
	cout << findzero(m) << endl;*/
	cout << findzero(n) - findzero(m) - findzero(n-m) << endl;
}
	

