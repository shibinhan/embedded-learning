#include<stdio.h>
int main(void){
	char str[]="pointer"; 
	char *left=str;
	char *right=str;
	char temp;
	while(*right!='\0'){
		right++;
	}
	if(right>str){
		right--;
		while(left<right){
			temp=*left;
			*left=*right;
			*right=temp;
			left++;
			right--;
		}
	}
	printf("%s\n",str);
	return 0; 
}
