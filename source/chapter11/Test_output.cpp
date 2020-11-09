#include "../std_lib_facilities.h"

int main()
{	
	int birth_year = 2001; 
	cout << showbase << dec << birth_year << "\t(decimal)\n" 
		<< showbase << hex << birth_year << "\t(hexadecimal)\n" 
		<< showbase << oct << birth_year << "\t(octal)\n";

	cout << endl << dec << "Age: " << 19 << endl;

	int a, b, c, d;
	cout << "\nEnter four numbers!" << endl;
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << "\nThe first number in decimal:\n" << a 
		<< "\nThe second number in octal:\n" << b 
		<< "\nThe third and the forth numbers in hexadecimal:\n" 
		<< c << '\t' << d << '\n';

	cout << noshowbase << dec;
	cout << '\n' << 1234567.89 << "\t(defaultfloat)\n"
		<< fixed << 1234567.89 << "\t(fixed)\n"
		<< scientific << 1234567.89 << "\t(scientific)\n";
	
	cout << '\n' << '|' << setw(10) << "Csaba" << '|' << setw(11) << "Csizmadia" 
        << '|' << setw(30) << "cscsabi2001@gmail.com"
        << '|' << setw(16) << "(204) 555-1233" << "|\n"
        << '|' << setw(11) << "Irén" << '|' << setw(11) << "Varga"
        << '|' << setw(30) << "irevarga@gmail.com"
        << '|' << setw(16) << "(204) 310-2312" << "|\n"
   		<< '|' << setw(10) << "Lajos" << '|' << setw(12) << "Banók" 
        << '|' << setw(30) << "hangulatfelelos@gmail.com"
        << '|' << setw(16) << "(204) 532-4234" << "|\n"
        << '|' << setw(10) << "Violetta" << '|' << setw(12) << "Pikács"
        << '|' << setw(30) << "madonna@gmail.com"
        << '|' << setw(16) << "(204) 351-6853" << "|\n"
    	<< '|' << setw(10) << "Zsolt" << '|' << setw(13) << "Gáspár" 
        << '|' << setw(30) << "zsoltika@gmail.com"
        << '|' << setw(16) << "(204) 785-1223" << "|\n"
        << '|' << setw(12) << "Győző" << '|' << setw(13) << "Gáspár"
        << '|' << setw(31) << "győzike@gmail.com"
        << '|' << setw(16) << "(204) 002-4610" << "|\n"
    	<< '|' << setw(11) << "Mária" << '|' << setw(13) << "Bíró" 
        << '|' << setw(30) << "mariabiro@gmail.com"
        << '|' << setw(16) << "(204) 436-7849" << "|\n"
        << '|' << setw(11) << "Zoltán" << '|' << setw(11) << "Elek"
        << '|' << setw(30) << "videoinfo1@gmail.com"
        << '|' << setw(16) << "(204) 329-9974" << "|\n";

	return 0;
}