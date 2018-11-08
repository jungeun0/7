#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int i,j;
	 int grade[5];
	 
	 for(i=0;i<5;i++){
	 	printf("input value (%d) = ", i);
	 	scanf("%d", &grade[i]);
	 }
	 for(j=0;j<5;j++){
	 	printf("grade[%d] : %d \n", j, grade[j]);
	 }
	
	return 0;
}
