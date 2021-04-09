#include <iostream>
using namespace std;

int main() {
	cout << "구구단 시작" << endl<<endl;

	for (int i = 1; i <9; i++){
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		cout << endl;
	}
}