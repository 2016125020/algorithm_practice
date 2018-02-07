#include <iostream>
#include <string>

using namespace std;

class Stack{
	private:
		int *s;
		int size;
	public:
		Stack(int n){
			s = new int[n];
			this->size = 0;
		}
		
		int isempty(){
			if(this->size == 0){
				return 1;
			}else{
				return 0;
			}
		}

		int push(int n){
			s[size] = n;
			size++;
		}

		int pop(){
			if(isempty() == 1){
				return -1;
			}else{
				size--;
				return s[size];
			}
		}

		int getsize(){
			return size;
		}

		int gettop(){
			if(isempty()){
				return -1;
			}else{
				return s[size-1];
			}
		}
};

int main(){
	int n;
	cin >> n;
	Stack stack(n);

	for(int i=0; i<n; i++){
		 string s;
		 cin >> s;
		 
		if(s.compare("push") == 0){
			int num;
			cin >> num;			
			stack.push(num);
		}
		if(s.compare("top") == 0){
			cout << stack.gettop() << "\n";
		}
		if(s.compare("pop") == 0){
			cout << stack.pop() << "\n";
		}
		if(s.compare("empty") == 0){
			cout << stack.isempty() << "\n";
		}if(s.compare("size") == 0){
			cout << stack.getsize() << "\n";
		}
	}
	return 0;
}














	
