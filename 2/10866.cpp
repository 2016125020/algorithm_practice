#include <iostream>

using namespace std;

class Deque{
	private:
		int front, back, arrsize, qsize;
		int *q;

	public:
		Deque(int num){
			this->arrsize = num;
			this->q = new int[arrsize];
			front = arrsize/2;
			back = arrsize/2+1;
			this->qsize = 0;
		}

		int resize(int n){		//새로 숫자가 들어갈 자리를 넣음
			if(n>=arrsize){
				return 0;
			}else if(n<0){
				return arrsize - 1;
			}else{
				return n;
			}
		}

		void push_front(int n){
			q[front] = n;
			front = resize(front - 1);
			qsize++;
		}

		void push_back(int n){
			q[back] = n;
			back = resize(back + 1);
			qsize++;
		}

		int pop_front(){
			if(qsize == 0){
				return -1;
			}else{
				front = resize(front + 1);
				qsize--;
				return q[front];
			}
		}

		int pop_back(){
			if(qsize == 0){
				return -1;
			}else{
				back = resize(back-1);
				qsize--;
				return q[back];
			}
		}

		int getfront(){
			if(qsize == 0){
				return -1;
			}else{
				return q[resize(front+1)];
			}
		}

		int getback(){
			if(qsize == 0){
				return -1;
			}else{
				return q[resize(back-1)];
			}
		}

		int isempty(){
			if(qsize == 0){
				return 1;
			}else{
				return 0;
			}
		}

		int getsize(){
			return qsize;
		}
};

int main(){
	int n;
	cin >> n;

	Deque q(n);

	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		
		if(!s.compare("push_front")){
			int num;
			cin >> num;

			q.push_front(num);
		}else if(!s.compare("push_back")){
			int num;
			cin >> num;

			q.push_back(num);
		}else if(!s.compare("pop_front")){
			cout << q.pop_front() << "\n";
		}else if(!s.compare("pop_back")){
			cout << q.pop_back() << "\n";
		}else if(!s.compare("size")){
			cout << q.getsize() << "\n";
		}else if(!s.compare("empty")){
			cout << q.isempty() << "\n";
		}else if(!s.compare("front")){
			cout << q.getfront() << "\n";
		}else if(!s.compare("back")){
			cout << q.getback() << "\n";
		}
	}
}
















