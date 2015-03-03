#include <iostream>

void squarePrint(int nWidth)
{
	// This function's purpose is to print a square based on user input

	using namespace std;

	int nArea = nWidth * nWidth;

	for (int iii = 1, currentWidth = 1; iii <= nArea; iii++)
	{
		if (currentWidth < nWidth)
		{
			cout << "+";
			currentWidth++;
		}
		else if (currentWidth == nWidth)
		{
			cout << "+" << endl;
			currentWidth = 1;
		}
	}
}

int main()
{
	using namespace std;

	int nWidth;

	cout << "I heard you wanted to make a square.  Well?  Tell me stuff already!\n";
	cout << "How many units wide do you want it: ";
	cin >> nWidth;
	// Todo: Write a check to ensure value is the correct type

	squarePrint(nWidth);

	return 0;
}
