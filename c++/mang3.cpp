/* Tao mang so nguyen duong co n phan tu (toi da 10)
	nhap vao 1 so nguyen duong x (0 <= x <= 9) va so nguyen duong y
	them y vao vi tri x cua mang
*/

#include <iostream>

using namespace std;

int main()
{
	int numbers[20];
	int n, x, y;
	
	cout << "n = ";
	cin >> n;
	
	cout << "Nhap mang: ";
	for(int i = 0; i < n; i++)
	{
		cin >> numbers[i];	
	}
	
	cout << "x = ";
	cin >> x;
	
	cout << "y = ";
	cin >> y;
	
	for(int i = n; i > x; i--)
	{
		numbers[i] = numbers[i - 1];
	}
	numbers[x] = y;
	n++;
	
	cout << "Mang sau khi them: ";
	for(int i = 0; i < n; i++)
	{
		cout << numbers[i] << " ";
	}
	
	return 0;
}
