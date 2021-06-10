#include <stdio.h>

int main() {
	int a, b ;

	printf( "Assigned:\n" ) ; 
	printf( "\tVariable a = %d", a = 8 );
	printf( "\tVariable b = %d", b = 4 );
	printf( "Added & Assigned\n" ) ;
	printf( "\tVariable a+=b (8+=4) a= %d \n", a += b ) ;
	printf( "Subtracted & assigned\n" ) ;
	printf( "\tVariable a-=b (12-=4) a= %d \n", a -= b ) ;
	printf( "Multiplied & Assigned\n" ) ;
	printf( "\tVariable a*=b (8*=4) a= %d \n", a *= b ) ;
	printf( "Devided & Assigned\n" ) ;
	printf( "\tVariable a/=b (34/=4) a= %d \n", a /= b ) ;
	printf( "Modulated & Assigned\n" ) ;
	printf( "\tVariable a%%=b (8%%=4) a= %d \n", a %= b ) ;
	return 0 ;
	}
