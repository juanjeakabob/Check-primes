#ifdef linux
#include <iostream>
#endif
#ifdef _WIN32
#include <conio.h>
#include <iostream>
#endif
using namespace std;

int main()
{

	int num;
	cout << "Type the number to check for:" << endl;
	cout << ">";
	cin >> num, 10;
	cout << endl;
	int div;
	for (div = 2; num % div != 0 && div < num; div++)
	{
		// ("Now checking for %i / %i\n", num, div); // Uncomment this line to enable verbose output.
	};
	if (num == div)
	{
		cout << "It's a prime!" << endl;
		// cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	else
	{
		cout << "Not a prime." << endl;
		// cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	// cout << "Task finished. ";
	// cout << "Press enter to quit." << endl;
	// cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}