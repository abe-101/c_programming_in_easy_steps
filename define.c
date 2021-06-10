#include <stdio.h>

#define LINE "____________________________"
#define TITLE "C Programming in easy steps"
#define AUTHER "Mike McGrath"

#ifdef _WIN32
#define SYSTEM "Windows"
#endif

#ifdef linux
#define SYSTEM "Linux"
#endif

int main() {
	printf( "\n \t %s \n \t %s \n", LINE , TITLE ) ;
	printf( "\t by %s \n \t %s \n", AUTHER, LINE ) ;
	printf( "\n Operating System: %s \n", SYSTEM ) ;
	return 0 ;
}
