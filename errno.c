#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
	FILE *f_ptr ;
	int i ;
	
	f_ptr = fopen( "nosuch.file" , "r" ) ;
	
	if( f_ptr != NULL ) {printf( "File opened\n" ) ; }
	else { perror( "error" ) ;}

	for( i = 0 ; i < 135 ; i++ )
	{
		printf( "Error %d: %s\n" , i , strerror(i)) ;
	}

	return 0 ;
}
