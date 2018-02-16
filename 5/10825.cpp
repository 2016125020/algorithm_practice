#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class student{
	public:
		string name;
		int korean;
		int english;
		int math;
};
bool compare(student st1, student st2){
	if(st1.korean == st2.korean){
		if(st1.english == st2.english){
			if(st1.math == st2.math){
				return st1.name < st2.name;
			}else{
				return st1.math > st2.math;
			}
		}else{
			return st1.english < st2.english;
		}
	}else{
		return st1.korean > st2.korean;
	}
}
int main(){
	int n;
	cin >> n;
	vector <student> stdlist(n);
	for(int i=0; i<n; i++){
		cin >> stdlist[i].name >> stdlist[i].korean >> stdlist[i].english >> stdlist[i].math;
	}
	sort(stdlist.begin(), stdlist.end(), compare);
	for(int i=0; i<n; i++){
		cout << stdlist[i].name << "\n";
	}
}
