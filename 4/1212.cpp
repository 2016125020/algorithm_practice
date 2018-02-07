#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack <int>s8;
	string s;
	cin >> s;
	int len = s.length();
	for(int i=0; i<len; i++){
		int q = (int)(s[i]-48);
		int cnt = 0;
		do{
			s8.push(q%2);
			q = q/2;
			cnt ++;
		}while(q);
		if(i!=0 && cnt!=3){
			for(int j=0; j<3-cnt; j++){
				cout << 0;
			}
		}
		while(!s8.empty()){
			cout << s8.top();
			s8.pop();
		}
	}
	cout << "\n";
}
