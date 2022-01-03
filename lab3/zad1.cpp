#include<iostream>
using namespace std;
int operacja;
float a, b, w;

int main() {
	cout << "Wybierz operacje ktora chcesz wykonac" << endl;
	cout << "Wybierz 1 - dodawanie, 2 - odejmowanie, 3 - mnozenie, 4 - dzielenie, 5 - wyjscie" << endl;
	cin >> operacja;
	switch (operacja) {
	case 1:
		cout << "Podaj zmienna a" << endl;
		cin >> a;
		cout << "Podaj zmienna b" << endl;
		cin >> b;
		cout << "Wynik dodawania" << endl;
		w = a + b;
		cout << w;
		break;
	case 2:
		cout << "Podaj zmienna a" << endl;
		cin >> a;
		cout << "Podaj zmienna b" << endl;
		cin >> b;
		cout << "Wynik odejmownia" << endl;
		w = a - b;
		cout << w;
		break;
	case 3:
		cout << "Podaj zmienna a" << endl;
		cin >> a;
		cout << "Podaj zmienna b" << endl;
		cin >> b;
		cout << "Wynik mnozenia" << endl;
		w = a*b;
		cout << w;
		break;
	case 4:
		cout << "Podaj zmienna a" << endl;
		cin >> a;
		cout << "Podaj zmienna b" << endl;
		cin >> b;
		cout << "wnik dzielenia" << endl;
		w = a / b;
		cout << w;
		break;
	case 5:
		break;
	}
}