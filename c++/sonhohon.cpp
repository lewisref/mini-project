#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	int tong = a + b;
	int hieu = abs(a - b);
	
	cout << "Gia tri nho hon la " << (tong - hieu) / 2;
	
	return 0;
}
