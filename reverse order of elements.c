#include<stdio.h>
int main() {
	int a[100],n,i;
	printf("enter the no of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the elements are :\n");
	for(i=0;i<n;i++)
	printf("%d \n",a[i]);
	printf("the reverse order of elements are :\n");
	for(i=n-1;i>=0;i--)
	printf("%d ",a[i]);
	return 0;
}
