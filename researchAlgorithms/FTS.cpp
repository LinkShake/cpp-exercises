#include <iostream>
#include "FTS.h"
#include <cstdlib>

void randArr(long long v[], unsigned long n) {
	for (unsigned long i = 0; i < n; i++) {
		*(v + i) = rand();
	}
}

bool FTS(long long v[], unsigned long n, long long x) {
	for (unsigned long i = 0; i < n; i++) {
		if (v[i] == x) 
			return true;
	}
	
	return false;
}
