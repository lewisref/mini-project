/* Viet chuong trinh nhap vao 2 so nguyen duong n và m (0 < n <= 10, 0 < m <= 10)
	Tao mang 2 chieu chua cac so nguyen co n hang và m cot
	Tinh va in ra man hinh tong cac phan tu co trong mang
*/

#include <iostream>

using namespace std;

int main()
{
	int n, m, arr[10][10];
	
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >>m;
	
	cout << "Nhap mang: " << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> arr[i][j];		
		}
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Tong cac phan tu trong mang la: " << sum;
		
	return 0;
}
