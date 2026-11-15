#include <iostream>

using namespace std;
/*
	Bai tap chuong 3
*/

int main()
{
	float a,b;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	if(a == 0 && b == 0)
	{
		cout << "Phuong trinh co vo so nghiem.";
	}
	else if(a ==0 && b !=0)
	{
		cout << "Phuong trinh vo nghiem.";
	}
	else if(a !=0)
	{
		cout << "Nghiem cua phuong trinh la " << -b / a;
	}
	
	return 0;
}
