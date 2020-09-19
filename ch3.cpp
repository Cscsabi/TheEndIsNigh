#include "std_lib_facilities.h"

int main()
{
	string first_name;
	cout << "Enter the name of the person you want to write to: \n";
	cin >> first_name;
	cout << "Dear " << first_name << ", how are you?\nI am fine. I miss you." << endl;
	string friend_name;
	cout << "Enter the name of one of your friends: \n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	char friend_sex = 0;
	cout << "Tell me your friend's sex: (m/f) \n";
	cin >> friend_sex;
	if ( friend_sex == 'm' )
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	else
		if ( friend_sex == 'f' )
		{
			cout << "If you see " << friend_name << " please ask her to call me.\n";
		}
			
	int age;
	cout << "Tell me the age of " << first_name << ":" << endl;
	cin >> age;
	if (age >= 110 or age <= 0)
		error("you're kidding!");
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if ( age < 12 )
		cout << "Next year you will be " << age + 1 << "." << endl;
	if ( age == 17 )
		cout << "Next year you will be able to vote." << endl;
	if ( age > 70)
		cout << "I hope you are enjoying your retirement." << endl;

	cout << "Yours sincerely\n\nCsaba Csizmadia\n";


	return 0; 
}
