#include <iostream>
#include <iomanip>
using namespace std;
int SoLuongUocSo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong uoc so: ";
	cout << SoLuongUocSo(n);
	return 0;
}
int SoLuongUocSo(int nn)
{
	int i = 1;
	int dem = 0;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 1;
	}
	return dem;
}