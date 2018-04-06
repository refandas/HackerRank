#include <iostream>
using namespace std;

int main() {
	int n,i,result;
	cin >> n;
	int arr[n];
	for(i=0; i<n; i++) {
		cin >> arr[i];
	}
	result=0;
	for(i=0; i<n; i++) {
		result+=arr[i];
	}
	cout << result;
}
