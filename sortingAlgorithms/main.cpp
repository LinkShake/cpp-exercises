#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void randArr(long v[], unsigned long length) {
	for (unsigned long i = 0; i < length; i++) v[i] = rand();
}

void swap(long v[], long i, long j) {
	long tmp = v[i];
	v[i] = v[j];
	v[j] = tmp;
}

long pivot(long v[], long startIdx, long endIdx) {
	long i = startIdx;
	long j = endIdx;
	long p = v[endIdx];
	
	do {
		while (i < j && v[i] <= p) i++;
		while (i < j && v[j] >= p) j--;
		if (i < j) swap(v, i, j);
	} while (i < j);
	
	//std::cout<<"i"<<i<<std::endl;
	
	swap(v, i, endIdx);
	
	return i;
}

void quickSort(long v[], long startIdx, long endIdx) {
	if (!(startIdx < endIdx)) return;
	
	long p = pivot(v, startIdx, endIdx - 1);
	
	quickSort(v, startIdx, p - 1);
	quickSort(v, p + 1, endIdx);
}

int main(int argc, char** argv) {
	unsigned long len;
	std::cout<<"inserisci la lunghezza del vettore"<<std::endl;
	std::cin>>len;
	long v[len];
	srand(time(NULL));
	randArr(v, len);
	
	std::cout<<"arr random"<<std::endl;
	for (unsigned long i = 0; i < len; i++) std::cout<<v[i]<<std::endl;
	
	quickSort(v, 0, len);
	std::cout<<"ordinato"<<std::endl;
	for (unsigned long i = 0; i < len; i++) std::cout<<v[i]<<std::endl;

	return 0;
}
