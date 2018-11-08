#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *one[],int *two[],int x, int y){
	int temp;
	
	temp = *one[x];
	*one[x] = *two[y];
	*two[y] = temp;
	
}


int main(int argc, char *argv[]) {
	
	 int one[5];
	 int two[5];
	 int k,j;
	 int i,l;
	 
	 for(i=0;i<5;i++){
	 	printf("input value : ");
	 	scanf("%d",one[i]);
	 	 }
	 for(l=0;l<5;l++){
	 	 printf("input value : ");
	 	scanf("%d",two[l]);
	 }
	 printf("input index number : ");
	 scanf("%d %d", &j,&k);
	 
	 swap(&one,&two,j,k);
	 
	 printf("swapped numbers : ");
	 
	 printf("%d %d", one[j], two[k]);
	return 0;
}
