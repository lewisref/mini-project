/* Viet chuong trinh nhap vao 2 ma tran có n hàng và m cot 
	(0 < m <= 10; 0 < n <= 10). In ra tong cac so le trong ma tran.
*/

#include <iostream>	

using namespace std;

int main()
{
	int n, m, matrix[10][10];
	cout << "n = ";
	cin >> n;
	
	cout << "m = ";
	cin >> m;
	
	cout << "Nhap ma tran: " << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(matrix[i][j] % 2 == 1)
			{
				sum += matrix[i][j];
			}
		}
	}
	
	cout << "Tong cac so le la: " << sum;
	
	return 0;	
}
