#include <iostream>
using namespace std;
bool fiboVerif(int);
int main()
{
	int n, i, x;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		if (fiboVerif(x))
		{
			cout << "DA\n";
		}
		else
		{
			cout << "NU\n";
		}
	}
	return 0;
}
bool fiboVerif(int n)
{
	// verifica daca numarul n este termen al sirului Fibonacci
	if (n < 1)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	int x, y, z;
	x = y = 1;
	do
	{
		z = x+y;
		if (z == n)
		{
			return 1;
		}
		x = y;
		y = z;
	}
	while (z < n);
	return 0;
}
// scor 100
