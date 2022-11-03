#include <iostream>
#include "FTS.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	unsigned long length = 5;
	long long v[length];
	randArr(v, length);
	for (unsigned long i = 0; i < length; i++) 
		std::cout<<*(v + i)<<std::endl;
	//if (argc < 2) std::cout<<"USAGE: prog str1 str2 str3...";
	//for (int i = 0; i < argc; i++)
	//	std::cout<<"index "<<i<<": "<<*(argv + i)<<std::endl;
	return 0;
}
