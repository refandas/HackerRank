#include <iostream>
using namespace std;

int main() {
	int N,i,arr[1000];
	
	cin >> N;
	for(i=0; i<N; i++) {
		cin >> arr[i];
	}
	for(i=N-1; i>=0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
