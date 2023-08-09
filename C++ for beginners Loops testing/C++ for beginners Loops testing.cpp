

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;


int main()
{
	int a, b, c = 0;;
	int arr[5];
	string check;
	
	 cout << "To start type Password: ";
	 cin >> check;
	 

	 while (check == "Me") {
		system("cls");
		cout << "You can start:\n";
		cout << "Please type your two numbers for add" << endl;
		cin >> a >> b;
		system("cls");

		for (int i = 0; i < 2; i++)
		{
			c = (a + b);
		}
		cout << "The number is " << c << endl;

		cout << "Please type 5 numbers to add with the number" << endl;

		for (int i = 0; i < 5; i++)
		{
			cout << "Type numbers for add " << i << " : ";
			cin >> arr[i];
			arr[i] += c;

		}
		cout << "\n You typed\n";
		for (int i = 0; i < 5; i++)
		{

			cout << "Number typed : " << i << " ,The number is : " << arr[i] << "\n";
		}


		
		
		cout << "To start again type the Password: \n";
		cin >> check;
	} 

	cout << "Goodbye!";
	system("pause>0");
	return 0;
}


