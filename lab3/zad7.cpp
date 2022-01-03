#include<iostream>
using namespace std;

int i, f, a, b;

int main() {
	a = 1;
	b = 1;
	cout << "F1= " << a << endl;
	cout << "F2= " << b << endl;
	i = 3;
	while (f < 300){
		f = a + b;
		a = b;
		b = f;
		cout << "F" << i << "= " << f << endl;
		i++;
	}
}