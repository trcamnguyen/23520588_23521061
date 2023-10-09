#include <iostream>
#include <iomanip>
using namespace std;
int TichUocSo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich uoc so: ";
	cout << TichUocSo(n);
	return 0;
}
int TichUocSo(int nn)
{
	int i = 1;
	float t = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			t = t * i;
		i = i + 1;
	}
	return t;
}