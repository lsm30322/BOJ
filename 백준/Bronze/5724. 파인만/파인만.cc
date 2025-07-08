#include <iostream>
using namespace std;

int main()
{
	int n;
	long long result;

	while (1)
	{
		cin >> n;
		if (n == 0) break;
		else cout << n * (n + 1) * (2 * n + 1) / 6 << "\n";
	}
	return 0;
}