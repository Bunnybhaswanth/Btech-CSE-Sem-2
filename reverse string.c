#include<stdio.h>
#include<string.h>

void reversestring(char*str){
	int length=strlen(str);
	char*start=str;
	char*end=str+length-1;
	while(start<end){
		char temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
}
int main(){
	char inputstring[100];
	printf("enter the string:");
	scanf("%s",inputstring);
	
	reversestring(inputstring);
	
	printf("reversed string:%s\n",inputstring);
	
	return 0;
}
