#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter x y:" << endl;
	cin >> x >> y;
	if (x > 0) {
		if (y > 0)
			cout << "1st quarter";
		else
			cout << "4rd quarter";
	}
	if (x < 0) {
		if (y > 0)
			cout << "2nd quarter";
		else
			cout << "3rd quarter";

	}
}
