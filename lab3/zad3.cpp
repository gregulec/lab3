#include<iostream>
using namespace std;

int i;

int main() {
	for (i = 1; i <= 500; i++){
		if (i % 7 == 0)cout << i << '\n';
	}
}