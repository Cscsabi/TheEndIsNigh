#include "std_lib_facilities.h"

int main()
{	
	/*int first_int, sec_int;*/
	string unit;
	double floating, smallest = 150000000, biggest = -15000;
	const double inch_to_m = 0.0254;
	const double cm_to_m = 0.01;
	const double ft_to_m = 0.3048; 
	int number_of_vals = 0;
	double sum_of_vals;
	vector<double> values;

	while(unit != "|")
	{	
		/*
		cout << "Give me two integers: " << endl;
		cin >> first_int >> sec_int;
		if ( first_int < sec_int )
			cout << "The smaller value is: " << first_int << " " << endl << "Then bigger value is: " << sec_int << endl << "Exit? (write: '|')" << endl;
		else if ( sec_int < first_int )
			cout << "The smaller value is: " << sec_int << " " << endl << "The bigger value is: " << first_int << endl << "Exit? (write: '|')" << endl;
		else if ( first_int == sec_int )
			cout << "The numbers are equal." << "Exit? (write: '|')";1
		*/

		cout << "To exit type in: '|'! To continue type any letter!" << endl;
		cin >> unit;
		if (unit == "|")
			break;

		cout << "Give me a floating-point number and a unit (cm, m, in, or ft)" << endl;
		cin >> floating;
		cin >> unit;


		while ( unit != "m" && unit != "cm" && unit != "in" && unit != "ft" && unit != "|" )
		{
			cout << "Illegal representation of unit! Please write admissible format (cm, m in, ft or |)!\n";
			cin >> unit;
		}		

				
		if ( unit == "in" )
		{
			floating = (floating * inch_to_m);
			sum_of_vals += floating;
		}

		else if ( unit == "cm" )
		{
			floating = (floating * cm_to_m);
			sum_of_vals += floating;
		}

		else if ( unit == "ft" )
		{
			floating = (floating * ft_to_m);
			sum_of_vals += floating;
		}

		else if ( unit == "m")
			sum_of_vals += floating;


		if ( floating < smallest )
		{	
			smallest = floating;
			cout << "The smallest so far" << endl;
		}
		

		else if ( floating > biggest )
		{	
			biggest = floating;
			cout << "The largest so far" << endl;
		}


		/*
		if (abs(first_int-sec_int) < 100)
			cout << "The numbers are almost equal.";
		*/
		number_of_vals++;
			
		

		
		values.push_back(floating);

	}

	sort(values);
	smallest = values[0];
	biggest = values[values.size()-1];

	cout << "The given values in meters: ";
	for ( auto val : values )
	{
		cout << val << "m" << " ";
	}

	cout << "\nThe smallest value: " << smallest << "m\nThe largest value: " << biggest 
	<< "m\nThe number of values: " << number_of_vals 
	<< "\nThe sum of values: " << sum_of_vals << "m" << endl;

 
	return 0;
}
