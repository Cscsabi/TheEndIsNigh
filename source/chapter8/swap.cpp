#include "../std_lib_facilities.h"

void swap_v(int& a,int& b)	//Ez a függvény tulajdonképpen nem csinál semmit xD
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	const int cx = 7;
	const int cy = 9;

	cout << "x=" << cx << " y=" << cy << endl;

	swap_v(cx,cy);

	cout << "x=" << cx << " y=" << cy << endl;

	return 0;
}