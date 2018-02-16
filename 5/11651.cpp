#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector< pair<int, int> > point(n);
	int a,b;
	for(int i=0; i<n; i++){
		cin >> point[i].second >> point[i].first;
	}
	sort(point.begin(), point.end());
	for(int i=0; i<n; i++){
		cout << point[i].second << " " << point[i].first << "\n";
	}
}


