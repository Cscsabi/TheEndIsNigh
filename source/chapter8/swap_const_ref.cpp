#include "../std_lib_facilities.h"

void swap_cr(const int& a, const int& b) 		//konstans változót akarunk változtatni!!
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 7;
	int y = 9;

	cout << "x=" << x << " y=" << y << endl;

	swap_cr(x,y);

	cout << "x=" << x << " y=" << y << endl;

	swap_cr(7,9);

	const int cx = 7;
	const int cy = 9;

	cout << "x=" << cx << " y=" << cy << endl;

	swap_cr(cx,cy);

	cout << "x=" << cx << " y=" << cy << endl;

	swap_cr(7.7,9.9);

	double dx = 7.7;
	double dy = 9.9;

	cout << "x=" << dx << " y=" << dy << endl;

	swap_cr(dx,dy);

	cout << "x=" << dx << " y=" << dy << endl;

	swap_cr(7.7,9.9);

	return 0;
}