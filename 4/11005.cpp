#include <iostream>
#include <stack>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int q;
	stack <char> rest;	
	q = a;
	while(q){
		if(q%b > 9){
			rest.push((char)(q%b + 55));
		}else{
			rest.push((char)(q%b + 48));
		}
		q = q/b;
	}
	while(!rest.empty()){
		cout << rest.top();
		rest.pop();
	}
	cout << "\n";
}
