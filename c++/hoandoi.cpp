#include <iostream>

using namespace std;

int main()
{
	int a, b;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	int c = a;
	a = b;
	b = c;
	
	cout << "Gia tri cua a la " << a << endl;
	cout << "Gia tri cua b la " << b << endl;
	
	return 0;
}
