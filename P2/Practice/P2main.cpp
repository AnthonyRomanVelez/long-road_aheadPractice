#include <iostream>
using namespace std;
//Giving it a try in GitHub
//Create function named square of asterisks
void square_of_asterisks(unsigned n)
{
	for (size_t row = 0; row < n; row++)
	{
		for (size_t col = 0; col < n; col++)
		{
			cout << "*";
		}
		cout << endl;
	}
}//what I am doing
int main()
{//Input from user!!!
	unsigned n = 0;
	cout << "Enter number: ";
	cin >> n;

	square_of_asterisks(n);

	return 0;
}