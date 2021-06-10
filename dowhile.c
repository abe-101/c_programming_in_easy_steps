#include <stdio.h>

int main()
{
	int i , arr[9] = { 10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 } ;

	i = 0 ; 
	while( i < 9 )
	{
		printf( "While: arr[%d} = %d\n" , i, arr[i] ) ; i++ ;
	}

	i = 0 ; 
	do
	{
		printf( "Do While: arr[%d} = %d\n" , i, arr[i] ) ; i++ ;
	}
	while( i < 9 ) ;
	return 0 ;
}
