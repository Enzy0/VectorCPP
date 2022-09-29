#include <iostream>
#include <vector>
#include <iterator>
#include <cstdlib>

using namespace std;
int sum(int j, vector<int>& a)
{
	int summPos = 0;
	int summNeg = 0;
	for (int i = 0; i < j; i++) {
		if (a[i] > 0) {
			summPos += a[i];
		}
		if (a[i] < 0) {
			summNeg += a[i];
		}
	}
	cout << "Sum Positive= " << summPos << "\n";
	cout << "Sum Negative = " << summNeg << "\n";
	return 0;
}

int main(int i)
{
	int j = 1 + (rand() % 99);
	vector<int>  v(j);
	for (i = 0; i < j; i++) {
		v[i] = (rand() % 200) - 100;
		cout << i << " = " << v[i] << "\n";
	}
	sum(j, v);
	return 0;
}