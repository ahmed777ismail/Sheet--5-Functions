#include <iostream>
using namespace std;



int print(short& n)
{

	for (short i = 1; i < n; i++)
	{
		cout << i << " ";
	}
	cout << n;
	return 0;

}

int main()
{

	short n;
	cin >> n;
	print(n);
	return 0;
}

