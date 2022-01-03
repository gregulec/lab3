#include<iostream>
using namespace std;

int i;

int main() {
	for (i = 100; i <= 300; i++){
		i % 2 == 0 ? cout << i << "liczba parzysta" << '\n' : cout << i << "liczba nieparzysta" << '\n';
	}
}