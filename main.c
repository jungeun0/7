#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int i,j,k;
	 int grade[5];
	 int sum=0;
	 
	 for(i=0;i<5;i++){
	 	printf("input value (%d) = ", i);
	 	scanf("%d", &grade[i]);
	 }
	 for(j=0;j<5;j++){
	 	printf("grade[%d] : %d \n", j, grade[j]);
	 }
	 for(k=0;k<5;k++){
	 	sum = grade[k] + sum;	
	 }
	
	
	printf("average : %d\n",sum/i);
	
	return 0;
}
