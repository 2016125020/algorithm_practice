#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int cnt2 = 0, cnt5 = 0;
	for(int i=2; i<=n; i++){
		int num=i;
		for(int j=2; j*j<=num; j++){
			while(num%j == 0){
				if(j == 2) {cnt2++;}
				if(j == 5) {cnt5++;}
				num = num/j;
			}
		}
		if(num == 2){cnt2++;}
		if(num == 5){cnt5++;}
	}
	//cout << "2 : " << cnt2 << " 5  : " << cnt5 << "\n"; 
	if(cnt2 > cnt5){
		cout << cnt5 << "\n";
	}else{
		cout << cnt2 << "\n";
	}
}
