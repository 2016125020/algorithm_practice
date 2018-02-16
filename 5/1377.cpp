#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	int a[n],b[n];
	for(int i=0; i<n; i++){
	 	scanf("%d", &a[i]);
		b[n] = a[n];
	}
	sort(a, a+n);
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(a[i] < b[i]){
			cnt ++;
		}
	}
	printf("%d\n", cnt);
}
