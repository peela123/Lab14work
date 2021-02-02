#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *, int *, int *, int *);

int main()
{
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		shuffle(&a, &b, &c, &d);
		cout << a << " " << b << " " << c << " " << d << "\n";
	}

	return 0;
}

void shuffle(int *w, int *x, int *y, int *z)
{
	int money[4] = {50, 100, 500, 1000};
	int a1, b1, c1, d1;

	do
	{
		a1 = money[rand() % 4];
		b1 = money[rand() % 4];
		c1 = money[rand() % 4];
		d1 = money[rand() % 4];
	} while (a1 == b1 || a1 == c1 || a1 == d1 || b1 == c1 || b1 == d1 || c1 == d1);

	*w = a1;
	*x = b1;
	*y = c1;
	*z = d1;
}