#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n;
	cin >> n;
	stack <int> s;
	int q = n;
	int r;
	while(1){
		r = q%(-2);
		if(r == -1){
			q = q/(-2)+1;
			s.push(1);
		}else{
			q = q/(-2);
			s.push(r);
		}
		if(q == 0){
			break;
		}
	}
	
	while(!s.empty()){
		cout<< s.top();
		s.pop();
	}

	cout << "\n";
}
