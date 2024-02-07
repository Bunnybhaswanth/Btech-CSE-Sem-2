#include<stdio.h>
int main() {
	int a[100],n,i,j,t,k;
	printf("enter the no of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the elements are :\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
    printf("enter the place :");
    scanf("%d",&j);
    printf("enter the numbeer :");
    scanf("%d",&k);
				for(i=j-1;i<n+1;i++){
					t=a[i];
					a[i]=k;
					k=t;
				}
	for(i=0;i<n+1;i++)
	printf("%d ",a[i]);
	return 0;
 }
