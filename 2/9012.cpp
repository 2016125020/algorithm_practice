#include<iostream>
#include<stack>

using namespace std;

int checkYesorNo(){
		string s;
		cin >> s;
		stack <int> st;
		int len = s.length();
		for(int i=0; i<len; i++){
			if(s[i] == '('){
				st.push(1);
			}else if(s[i] == ')'){
				if(st.empty()){
					return 0;
				}else{
					st.pop();
				}
			}
		}
		if(st.size() == 0){
			return 1;
		}else{
			return 0;
		}
}

int main(){
	int n,ans;
	cin >> n;
	for(int i=0; i<n; i++){
		ans = checkYesorNo();
		if(ans == 0){
			cout << "NO";
		}else{
			cout << "YES";
		}
		cout << "\n";
	}
}
