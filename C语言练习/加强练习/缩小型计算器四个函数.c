#include<stdio.h>
int a,b;
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
double div(double a,double b){
	return a/b;
}
int main(){
	int num1,num2;
	char op;
	printf("请输入第一个数");
	scanf("%d",&num1);
	printf("请输入运算符");
	scanf(" %c",&op);
	printf("请输入第二个数");
	scanf("%d",&num2);
	if(op=='+'){
	printf("结果：%d\n",add(num1,num2));
	}else if(op=='-'){
	printf("结果：%d\n",sub(num1,num2));
    }else if(op=='*'){
	printf("结果：%d\n",mul(num1,num2));
    }else if(op=='/'){
    	if(num2==0)
    	printf("除数不能为0");
		else{
	printf("结果：%d\n",div(num1,num2)); 
    }
    }else{
    	printf("运算符输入错误");
	}
	return 0;
}
