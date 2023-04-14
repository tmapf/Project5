#include <iostream>
#include <vector>

using namespace::std;


int main() {
	int n = 10;
	int n_max, n_min, n_mmx, n_mmn;
	vector <int> a(n);
	a = { -19,-20,-13,-8,4,5,1,44,25,30 };
	n_max = a[0];
	n_min = a[0];
	n_mmn = a[0];
	n_mmx = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > n_max) {
			n_mmx = n_max;
			n_max = a[i];
		}
		else
			if (a[i] > n_mmx)
				n_mmx = a[i];
		if (a[i] < n_min) {
			n_mmn = n_min;
			n_min = a[i];
		}
		else
			if (a[i] < n_mmn)
				n_mmn = a[i];
	}
	cout << n_max << " - max,  " << n_mmx << " - before max;  " << n_min << " - min, " << n_mmn << " - after min." << endl;
	return 0;
}

