#include <iostream>
#include <stack>

using namespace std;

int main(){
	string s;
	cin >> s;
	int len, stickcnt = 0;
	len = s.length();
	stack <int> st;

	for(int i=0; i<len; i++){
		if(s[i] == '('){
			st.push(i);
		}else{
			if(st.top() == i-1){
				stickcnt += st.size() - 1;
			}else{
				stickcnt += 1;
			}
			st.pop();
		}
	}

	cout << stickcnt << "\n";
	return 0;
}

