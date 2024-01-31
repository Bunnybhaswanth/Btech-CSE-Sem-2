#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,r,c,i,j;
	printf("enter the rows and columns : ");
	scanf("%d%d",&r,&c);
	ptr=(int*)malloc(r*c*sizeof(int));
	printf("enter the elements");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",ptr+i*c+j);
		}
    }
    printf("the elements of the 2D array :\n");
    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",*ptr+i*c+j);
		}
		printf("\n");
    }
    free(ptr);
}
