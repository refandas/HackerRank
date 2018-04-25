#include <iostream>
using namespace std;

int main() {
	int a,b;
	int *pa = &a, *pb = &b;
	
	cin >> a >> b;
	cout << *pa+*pb << endl;
	if(*pa-*pb<0) cout << (*pa-*pb)*-1 << endl;
	else cout << *pa-*pb << endl;
}
