#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef unsigned int uint;

int* dynamicAlloc(uint length) {
	uint k = length*sizeof(int);
	int* p = (int*)malloc(k);
	memset(p, 0, k);
	return p;
}

int[] merge(int a[], int b[], uint n) {
	//creating a 2n length array
	// int v[2*n];
	int* v = dynamicAlloc(2*n); //creating the array with malloc
	
	//initializing i,j,k=0, idxs of the three arrays that I'll update
	uint i = 0;		// a idx
	uint j = 0;		// b idx
	uint k = 0;		// v idx
	
	//keep looping till the end of one of the two input arrays
	while (j < n && i < n) {
		if (a[i] <= b [j]) {
			v[k] = a[i];
			i++;
		}
		
		if (b[j] < a[i]) {
			v[k] = b[j];
			j++;
		}
		
		k++;
	}
	
	while (i < n) {
		v[k] = a[i];
		i++;
		k++;
	}
	
	while (j < n) {
		v[k] = b[j];
		j++;
		k++;
	}
	
	return v;
}
