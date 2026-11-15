/* tao mang so nguyen duong co n phan tu (toi da 10)
	nhap vao 1 so nguyen duong x va them x vao cuoi phan tu mang vua tao 
 */

#include <iostream>

using namespace std;

int main()
{
	int numbers[20];
	int n, x;
	
	cout << "n = ";
	cin >> n;
	
	cout << "Nhap mang: ";
	for(int i; i < n; i++)
	{
		cin >> numbers[i];
	}
	
	cout << "x = ";
	cin >> x;
	
	numbers[n] = x;
	n++;
	
	cout << "Mang sau khi them: ";
	for(int i = 0; i < n; i++)
	{
		cout << numbers[i] << " ";
	}
	
	return 0;
}
