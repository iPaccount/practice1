#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	double carrots;
	double x;
	double m;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cin >> x;
	m = sqrt(x);
	cout << "Here are two more.";
	carrots = carrots + m;
	cout << "Now you have "<< carrots << " carrots." << endl;

	return 0;
}
