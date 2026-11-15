#include <iostream>

using namespace std;

int main()
{
	char n;
	
	cout << "Chu cai viet thuong: ";
	cin >> n;
	
	cout << "Chu cai viet hoa: " << (char) (n - 32);
	
	return 0;
}
