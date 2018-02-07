#include <iostream>

using namespace std;

class Queue{
	private:
		int front, back;
		int *arr;
	public:
		Queue(int size){
			arr = new int[size];
			front = back = 0;
		}

		int isempty(){
			if(back == front){
				return 1;
			}else{
				return 0;
			}
		}

		int push(int n){
			arr[back] = n;
			back ++;
		}

		int pop(){
			if(isempty() != 1){
				front++;
				return arr[front - 1];
			}else{
				return -1;
			}
		}

		int getsize(){
			return back - front;
		}

		int getfront(){
			if(isempty() != 1){
				return arr[front];
			}else{
				return -1;
			}
		}

		int getback(){
			if(isempty() != 1){
				return arr[back-1];
			}else{
				return -1;
			}
		}
};

int main(){
	int n;
	cin >> n;

	Queue q(n);
	
	for(int i=0; i<n; i++){
		string s;
		cin >> s;

		if(s.compare("push") == 0){
			int num;
			cin >> num;

			q.push(num);
			continue;
		}else if(s.compare("front") == 0){
			cout << q.getfront();
		}else if(s.compare("back") == 0){
			cout << q.getback();
		}else if(s.compare("empty") == 0){
			cout << q.isempty();
		}else if(s.compare("pop") == 0){
			cout << q.pop();
		}else if(s.compare("size") == 0){
			cout << q.getsize();
		}

		cout << "\n";
	}
}


























