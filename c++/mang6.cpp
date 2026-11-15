/* Viet chuong trinh nhao vao 1 so nguyen n (2 <= n <= 10)
	Nhap mang co n so nguyen va nhap so nguyen k. 
	Hay kiem tra xe trong mang co xuat hien 2 phan tu có tong bang k hay khong,
	neu co hay in ra man hinh vi tri cua 2 phan tu do (lay 2 vi tri dau tien tim duoc).
*/

#include <iostream>

using namespace std;

int main()
{
	int n, k, arr[10];
	cout << "n = ";
	cin >> n;
	
	cout << "Nhap mang: ";
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "k = ";
	cin >> k;
	
	int x = -1, y = -1;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j && (arr[i] + arr[j]) == k)
			{
				x = i;
				y = j;
				break;
			}
		}
		if(x != 1 && y != -1)
		{
			break;
		}
	}
	
	if(x != 1 && y != -1)
	{
		cout << "Ket qua: " << x << " " << y;
	}
	else
	{
		cout << "Khong co!";
	}
	
	return 0;	
}
