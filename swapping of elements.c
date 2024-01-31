#include<stdio.h>
int swap(int*,int*);
int main(){
  int*x;int*y;
  int num1,num2;
  printf("enter the two integers");
  scanf("%d%d,&num1,&num2");
  printf ("before the swapping num1=%d,num=%d\n,num1,num2");
  swap(&num1,&num2);
  printf ("after the swapping num1=%d,num=%d\n,num1,num2");
  return 0;
}

swap(int*x,int*y)
{
	int c;
	c=*x;
	*x=*y;
	c=*y;
}
