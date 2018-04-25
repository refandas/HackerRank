#include <iostream>
using namespace std;

int main() {
	string a,b,a1,b1;
	int i,len1, len2;
	
	cin >> a >> b;
	len1 = a.size(); len2 = b.size();
	cout << len1 << " " << len2 << endl;
	cout << a+b << endl;
	
	a1 = a; a1[0] = b[0];
	for(i=0; i<len1; i++) {
		cout << a1[i];
	} cout << " ";
	
	b1 = b; b1[0] = a[0];
	for(i=0; i<len2; i++) {
		cout << b1[i];
	} cout << endl;
}
