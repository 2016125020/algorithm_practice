#include <iostream>
#include <stack>

using namespace std;

int main(){
	string s;
	int n, len;
	cin >> s >> n;
	len = s.length();
	stack<char> fwd, bwd;
	for(int i=0; i<len; i++){
		fwd.push(s[i]);
	}

	for(int i=0; i<n; i++){
		char cmd;
		cin >> cmd;
		if(cmd == 'L'){
			bwd.push(fwd.top());
			fwd.pop();
		}else if(cmd == 'D'){
			fwd.push(bwd.top());
			bwd.pop();
		}else if(cmd == 'B'){
			fwd.pop();
		}else if(cmd == 'P'){
			cin >> cmd;
			fwd.push(cmd);
		}
	}
	int fwdlen = fwd.size();
	for(int i=0; i<fwdlen; i++){
		bwd.push(fwd.top());
		fwd.pop();
	}
	int bwdlen = bwd.size();
	for(int i=0; i<bwdlen; i++){
		cout << bwd.top();
		bwd.pop();
	}
	cout << "\n";
}
