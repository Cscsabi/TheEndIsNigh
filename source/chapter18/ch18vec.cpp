#include "../std_lib_facilities.h"

vector<int> gv { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(vector<int> gv)
{
	vector<int> lv(10);
	for(int i = 0; i < 10; ++i)
		lv[i] = gv[i];

	for(auto& v : lv)
		cout << v << '\t';

	cout << endl;
	vector<int> lv2(10);
	lv2 = gv;

	for(auto& v : lv2)
		cout << v << '\t';
}

int fact(int n)
{
	if ((n==0)||(n==1))	return 1;
   	else	return n*fact(n-1);
}

int main()
{
	f(gv);
	cout << endl;
	
	vector<int> vv(10);
	for(int i = 0; i < 10; ++i)
		vv[i] = fact(i+1);

	f(vv);
	cout << endl;

	return 0;
}
