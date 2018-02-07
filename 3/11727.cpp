#include <iostream>

using namespace std;

int fillwithtile(int n){

}

int main(){
	int n;

	cin >> n;

	int save[n+1];
	save[1] = 1;
	save[2] = 3;

	for(int i=3; i<=n; i++){
		save[i] = (save[i-1] + 2 * save[i-2])%10007;
	}

	cout << save[n] << "\n";
	return 0;
}
