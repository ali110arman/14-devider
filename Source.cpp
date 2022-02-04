#include <iostream>
#include <search.h>
using namespace std;
void main() {
	int num, i=1, j=0; //1
	cout << "inter your number" << endl;//1
	cin >> num;//1
	cout << "the numbers divisor is:\n";//1
	for (i = 1; i <= num/2; i++) {//3*2
		if (num % i == 0) {//0
			cout << i<<endl;//1
			j = j + 1;//1
		}
	}
	cout << "and the count of divisor is:" << j ;
}
