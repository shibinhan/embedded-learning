#include <stdio.h>

int main(){
	int i;
	int number[]={1,2,3,4,5};
	int length = sizeof(number)/sizeof(number[0]);
	printf("数组逆序输出");
    for (i = length - 1; i >= 0; i--){
		printf("%d",number[i]);
	} 
	printf("\n");
	char text[]="hello";
	int count =0;
	for(i=0;text[i]!='\0';i++){
		count++;
	}
	printf("字符串中的字符字数：%d\n",count);
	return 0;
} 
