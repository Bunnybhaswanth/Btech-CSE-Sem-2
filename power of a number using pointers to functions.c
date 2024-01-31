#include <stdio.h>
int power(int x, int y){
    int i,result=1;
    for(i=0;i<y;i++){
        result*=x;
    }
    return result;
}

int main()
{
    int x,y;
    printf("enter base and exponent :");
    scanf(" %d%d",&x,&y);
    int(*ptr)(int, int)=power;
    printf("result=%d",ptr(x,y));

    return 0;
}

