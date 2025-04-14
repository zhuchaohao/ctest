#include<stdio.h>
void jh(int *i,int *j);
int main(){
	int a=1,b=2;
	printf("%d %d\n",a,b);
	jh(&a,&b);
	printf("%d %d",a,b);
	return 0;

}

void jh(int *i,int *j){
	int d;
	d=*i; //d的值等于 指针i的值
	*i=*j;//*i 指针i中的值等于指针j的值，地址不变
	*j=d;//*j 指针j中的值等于d的值
}


/*

void jh(unsigned int *i,unsigned int *j);
int main(){
	unsigned int a=1,b=2;
	printf("%d %d\n",a,b);
	jh(&a,&b);
	printf("%d %d",a,b);
	return 0;

}

void jh(unsigned int *i,unsigned int *j){
	unsigned int d;
	d=*i; //d的值等于 指针i的值
	*i=*j;//*i 指针i中的值等于指针j的值，地址不变
	*j=d;//*j 指针j中的值等于d的值
}
*/