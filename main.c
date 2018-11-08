#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 365;
	int *ptr ;
	ptr = &i;
	
	printf("i address : %d  \n i value : %d \n", &i, i );
	printf("ptr address : %d \n ptr value : %d", ptr, *ptr);
	
	
	
	
	return 0;
}
