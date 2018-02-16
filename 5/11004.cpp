#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int A[n];
	for(int i=0; i<n; i++){
		scanf("%d", &A[i]);
	}
	sort(A, A+n);
	printf("%d\n", A[k-1]);
}
	
