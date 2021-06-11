#include <stdio.h>

int main()
{
	int i ;
	int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ;
	int *ptr = nums ;
	printf( "\nAt address: %p is value: %d\n", ptr ,*ptr ) ;
	ptr++ ;
	printf( "At address: %p is value: %d\n", ptr ,*ptr ) ;
	ptr++ ;
	printf( "At address: %p is value: %d\n", ptr ,*ptr ) ;
	ptr -= 2 ;
	printf( "At address: %p is value: %d\n\n", ptr ,*ptr ) ;
	for( i = 0 ; i < 10 ; i++ )
	{
		printf( "Element %d Contains Value: %d Stored at: %p\n" , i , *ptr , ptr ) ;
		ptr++ ;
	}
	return 0 ;
}
