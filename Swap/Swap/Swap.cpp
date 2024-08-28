#include<iostream>
#include<algorithm>
using namespace std;
void swap(int a, int f)
{
	a = f;
	f = a;
}
int main()
{
	int a, f;
	cin >> a >> f;
	swap(a, f);
	cout << f << " " << a << endl;
}