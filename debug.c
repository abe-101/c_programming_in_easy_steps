#include <stdio.h>

#define DEBUG 3
#undef DEBUG

int main() {
	#if DEBUG == 1
		printf( "Debug status is 1 \n" ) ;
	#elif DEBUG == 2
		printf( "Debug status is 2 \n" ) ;
	#else
	#ifdef DEBUG
		printf( "Debug is defined! \n" ) ;
	#endif
	#ifndef DEBUG
		printf( "Debug is not defined! \n" ) ;
	#endif
	#endif
	return 0 ;
}
