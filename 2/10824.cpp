#include <iostream>
//#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main(){
	char a[30], b[30], c[30], d[30];
	
	cin >> a >> b >> c >> d;
	cout << a << b << c << d << endl;
	char *AB, *CD;
	
	AB = strcat(a,b);
	CD = strcat(c,d);
	cout << AB << " " << CD << endl;
	cout << atoll(AB) + atoll(CD) << "\n";

	return 0;
}

