#include <iostream>
using namespace std;

float combination(float n, float r)
{
	if (r > 0) {
		return (n / r) * combination(n - 1, r - 1);
	}
	
	return 1;
}

int main() {
	double n, r;
	int res;

	cin >> n >> r;

	res = combination(n, r);

	cout << res << endl;

	return 0;
}
