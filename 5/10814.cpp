#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair <int, string> a, pair <int, string> b){
	return a.first < b.first;
}
int main(){
	int n;
	cin >> n;
	vector< pair <int, string> > person(n);
	for(int i=0; i<n; i++){
		cin >> person[i].first >> person[i].second;
	}
	stable_sort(person.begin(), person.end(), compare);
	for(int i=0; i<n; i++){
		cout << person[i].first << " " << person[i].second << "\n";
	}
}
