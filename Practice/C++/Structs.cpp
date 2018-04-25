#include <iostream>
using namespace std;

typedef struct {
	int age, standard;
	string first_name, last_name;
} type1;
type1 data;

int main() {
	cin >> data.age >> data.first_name >> data.last_name >> data.standard;
	cout << data.age << " " << data.first_name << " " << data.last_name << " " << data.standard << endl;
}
