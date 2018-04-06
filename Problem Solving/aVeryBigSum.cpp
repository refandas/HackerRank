#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int matA[100][100],n,i,j;
	int sum1 = 0, sum2 = 0;
	cin >> n;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			cin >> matA[i][j];
		}
	}
	
	for(i=0; i<n; i++) {
		sum1 += matA[i][i];
		sum2 += matA[i][n-1-i];
	}
	
	int result = sum1-sum2;
	
	if(result<0)
		result*=-1;
	
	cout << result << endl;
}

