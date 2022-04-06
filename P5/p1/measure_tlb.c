#include "measure_tlb.h"

#define PAGESIZE 4096

uint64_t getTimeStamp() {
	// Implement this function.
	return 0;
}

uint64_t measureFunction( void(*function)(void *), void *arg ) {
	(void)function;
	(void)arg;
	// Implement this function
	return 0;
}

void measureStatistics( int statcount, Statistics *stat, void(*function)(void *), void*arg) {
	(void)statcount;
	(void)function;
	(void)arg;

	stat->min = 0;
	stat->avg = 0;
	stat->max = 0;

	// Implement this function: invoke measureFunction() statcount times and calculate statistics
}

void accessMemory(int n, int pages) {
	(void)n;
	(void)pages;
	// Implement this function
}

void accessMemoryWrapper(void *p) {
	(void)p;
	// Implement this function
}

