
#include <stdio.h>

int findSum(int *arr, int size) {
    int sum = 0,i;
	 
    for ( i = 0; i < size; i++) {
        sum += *arr;
        *arr++;       
    }

    return sum;
}

int main() {
	int arr[100],size,*ptr,i;
    ptr = arr;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the elements");
    for( i=0;i<size;i++)
    scanf("%d",&arr[i]);

    int result = findSum(ptr, size);

    printf("Sum of array elements: %d\n", result);

    return 0;
}
