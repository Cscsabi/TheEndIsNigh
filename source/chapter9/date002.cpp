#include "../std_lib_facilities.h"

struct Date{
	int year, month, day;
	Date(int y, int m, int d);
	void add_day(int n);
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
		year = y;
	else
		error("Invalid year");
	if (m <= 12 && m > 0)
		month = m;
	else
		error("Invalid month");
	if (d > 0 && d < 32)
		day = d;
	else
		error("Invalid day");
}

void Date::add_day(int n)
{
	day += n;
	if (day > 31)
	{
		month += 1;
		day -= 31;
		if ( month > 12)
		{
			year += 1;
			month -= 12;
		}
	}
}

int main()
{
	try{

		Date today{1978, 6, 25};

		Date tomorrow = today;

		//Date my_birthday {2020,12,31};

		//cout << "Date: " << today.year << ". " << today.month << ". " << today.day << ".\n";

		tomorrow.add_day(1);

		cout << "Date: " << tomorrow.year << ". " 
			<< tomorrow.month << ". " << tomorrow.day << ".\n";

		//my_birthday.day++;

		//cout << "Date: " << my_birthday.year << ". " << my_birthday.month << ". " << my_birthday.day << ".\n";
		
		Date invalid{2004, 13, -5};
		cout << "Date: " << invalid.year << ". " << invalid.month << ". " << 
		invalid.day << "." << endl;

		return 0;
	}
	catch(exception& e){
		cerr << e.what() << endl;
		return 1;
	}
}