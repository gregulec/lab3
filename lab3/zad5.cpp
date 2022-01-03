#include<iostream>
#include<cmath>
using namespace std;

int a, b, c, p;

int main() {
	cout << "Podaj a - jeden z krotszych bokow trojkata" << endl;
	cin >> a;
	cout << "Podaj b - jednen z krotszych bokow trojkata" << endl;
	cin >> b;
	cout << "Podaj c - najdluzszy bok trojkata" << endl;
	cin >> c;
	if (a + b > c){
		p = (a + b + c) / 2;
		cout << sqrt(p*(p - a)*(p - b)*(p - c));
	}
	else cout << "Nie mo¿na stworzyc trojkata" << endl;
}