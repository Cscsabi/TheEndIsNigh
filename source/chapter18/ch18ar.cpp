#include "../std_lib_facilities.h"

int ga[10] { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int xa[], int n)
{
	int la[10] = { };

	for(int i = 0; i < n; ++i)
		la[i] = ga[i];

	for(int i = 0; i < 10; ++i)
		cout << la[i] << '\t';

	int* p = new int[n];

	for(int i = 0; i < n; ++i)
		p[i] = xa[i];

	for(int i = 0; i < 10; ++i)
		cout << p[i] << '\t';

	delete[] p;
}

int fact(int n) {
   if ((n==0)||(n==1))	return 1;
   else	return n*fact(n-1);
}

int main()
{	
	cout << "Binary array" << endl;
	f(ga, 10);

	int aa[10] = { };
	for(int i = 0; i < 10; ++i)
		aa[i] = fact(i+1);

	cout << "\nFactorial array" << endl;
	f(aa, 10);
	cout << '\n';

	return 0;
}
