#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
int main(){
	int numA, numB, lenA;
	stack <int> s;
	cin >> numA >> numB >> lenA;
	int num, decA = 0;
	for(int i=0; i<lenA; i++){
		cin >> num;
		decA = decA + num * pow(numA, lenA-i-1);
	}

	int q = decA;

	while(1){
		s.push(q%numB);
		q = q/numB;
		if(q == 0){
			break;
		}
	}
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << "\n";
}
