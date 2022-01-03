#include<iostream>
using namespace std;

float i, s;

int main() {
	s = 0;
	for (i = 1; i <= 10000; i++){
		s = s + 1 / (i*i);
	}
	cout << s;
}