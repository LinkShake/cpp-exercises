#include <iostream>

using namespace std;

typedef unsigned int uint;

bool generalMerge(int a[], uint n, int b[], uint m, int x[], uint& k) {
	if (k < m + n) return false;
	
	uint i = 0;
	uint j = 0;
	k = 0;
	
	do {
		if (i >= n) {
			x[k++] = b[j++];
		}
		
		if (j >= m) {
			x[k++] = a[i++];
		}
		
		x[k++] = a[i] < b[j] ? a[i++] : b[j++];
		
	} while (k < m + n);
	
	return true;
}
