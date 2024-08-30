#include<iostream>
using namespace std;
#include<iomanip>
int get_min(int arr[], int n)
{
	int minn = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minn)
		{
			minn = arr[i];
		}
	}

	return minn;
}


int get_max(int arr[], int n)
{
	int maxx = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxx)
		{
			maxx = arr[i];
		}
	}

	return maxx;
}


int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << get_min(arr, n) << " " << get_max(arr, n) << endl;
	return 0;
}