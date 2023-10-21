#include <iostream>
using namespace std;

int main()
{
	int num, mx, mn;
	cout << "Enter your number:";
	cin >> num;
	if (num / 10 > num % 10)
	{
		mn = num % 10; mx = num / 10;
	}
	else
	{
		mx = num % 10; mn = num / 10;
	}
	cout << "Max number:" << mx << endl;
	cout << "Min number:" << mn << endl;
}
