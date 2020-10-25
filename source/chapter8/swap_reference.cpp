#include "../std_lib_facilities.h"

void swap_r(int& a,int& b)
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

	swap_r(x,y);

	cout << "x=" << x << " y=" << y << endl;

	/*

	swap_r(7,9);
	
	const int cx = 7;				//konstanst nem lehet változtatni!!
	const int cy = 9;

	cout << "x=" << cx << " y=" << cy << endl;

	swap_r(cx,cy);

	cout << "x=" << cx << " y=" << cy << endl;

	*/

	/*
	
	swap_r(7.7,9.9);				//a függvény egész számokkal működik!!

	double dx = 7.7;
	double dy = 9.9;

	cout << "x=" << dx << " y=" << dy << endl;

	swap_r(dx,dy);

	cout << "x=" << dx << " y=" << dy << endl;

	//swap_r(7.7,9.9);

	*/

	return 0;
}