#include<iostream>
using namespace std;

int n;
double s;

int main() {
	s = 0;
	for (n = 0; n < 1000000; n++){
		s = s + pow(-1, n) / (2 * n + 1);
	}
	s = s * 4;
	cout << s;
}