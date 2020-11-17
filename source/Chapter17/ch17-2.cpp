#include "../std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n; ++i)
		os << a[i] << endl;
	return os;
}

int main()
{
	try{
		int a = 7;
		int *p1 = &a;
		cout << "Pointer p1=" << p1 << endl << "Points to:" << *p1 << endl;

		
		int* p2 = new int[7] { 1, 2, 4, 8, 16, 32, 64 };
		cout << "Pointer p2=" << p2 << endl << "Points to:" << endl;
		print_array(cout, p2, 7);

		int* p3 = p2;
		p1 = p2;
		p3 = p2;

		cout << "Pointer p1=" << p1 << endl << "Points to:" << *p1 << endl;
		cout << "Pointer p2=" << p2 << endl << "Points to:" << endl;
		print_array(cout, p2, 7);

		delete[] p2;

		p1 = new int[10] { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
		p2 = new int[10];

		for(int i = 0; i < 10; ++i)
			p2[i] = p1[i];

		for(int i = 0; i < 10; ++i)
			cout << p2[i] << endl;
		
		vector<int> v0(10);
		int y = 1;
	    for (int& v : v0) {
	        v = y;
	        y = 2*y;
	    } 

	    vector<int> v1(10);

	    for(int i = 0; i < 10; ++i)
	    	v1[i] = v0[i];

	    for(int i : v1)
	    	cout << i << endl;

	    delete[] p1;
	    delete[] p2;

		return 0;

	}catch(exception& e){
		cerr << "Exception: " << e.what() << '\n';
   		return 1;
	}catch(...) {    		
		cerr << "Unknown exception\n";
    	return 2;
	}
}