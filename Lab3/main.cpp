#include<iostream>
#include<iomanip>
#include<cmath>


using namespace std;


int main()
{
	double a, b, h, x, y, s, p;
	int n, i;

	cout << "vvedite a, b, n" << endl;
	cin >> a >> b >> n;


	h = (b - a) / 10;
	x = a;
	do
	{
		s = 1 - (pow(x, 2) / 2);
		p = 1;
		for (i = 1; i <= n; i++)
		{
			p *= pow(-1, n) * ((pow(x, 2 * n)) / (2 * n));
			s += p;
		}
		y = cos(x);
		cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
		x += h;
	} while (x <= b + h / 2);
	cout << endl;
	
	return(0);
}