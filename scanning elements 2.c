#include<stdio.h>

int main(){
    int N, arr[100], i;

    printf("Enter the No. of elements in the array:");
    scanf("%d",&N);

    printf("Enter the elements of the array:\n");
    for (i=0; i<N; i++){
        printf("Enter the %d element:",i);
        scanf("%d", &arr[i]);
    }

    printf("The array of %d elements is:", N);
    for (i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

