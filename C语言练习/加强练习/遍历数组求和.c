#include<stdio.h>
int main(void)
{
	int a[]={3,7,2,9,5,4};
	int *p=a;
	int *end=a+sizeof(a)/sizeof(a[0]);
	int sum=0;
	while(p<end){
		sum+=*p;
		p++;
	} 
	printf("sum=%d\n",sum);
	return 0;
}
