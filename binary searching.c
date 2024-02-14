#include<stdio.h>
int main(){
	int n,i,a[100],t,low,high,middle;
	printf("enter the number of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the elememts are :\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	printf("enter the number to target :");
	scanf("%d",&t);
	low=0;
	high=n-1;
	middle=(low+high)/2;
	while(low<=high){
		if(a[middle]==t){
			printf("element %d is found in place %d",t,middle+1);
			break;
		}
		if(a[middle]<t){
			low=middle+1;
			middle=(high+low)/2;
		}
		if(a[middle]>t){
			high=middle-1;
			middle=(high+low)/2;
		}
	}
	if(low>high){
		printf("the element is not found");
	}
	return 0;
}
