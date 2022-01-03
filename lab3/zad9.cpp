#include<iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;

int a, b, c;

int main() {
	srand(time(NULL));
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	do{
		cout << "Podaj poprawny wynik mnozenia liczb " << a << " i " << b << endl;
		cin >> c;
	} while (c != a*b);


}