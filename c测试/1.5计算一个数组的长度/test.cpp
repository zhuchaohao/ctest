#include<stdio.h>

#define ARRAY_LENGTH(arr) = sizeof(arr)/sizeof(arr[0]);//宏定义
 //int len(int *p);//

int main(){
	int count=0;
	int a[]={1,2,3,4,5,6,7,8,9,10};
//	char b[]={"holle wolrd"};
//	count=sizeof(b)/sizeof(b[0]); //计算一个数组的长度（个数）
	count=len(a);	
	printf("%d \n",count);
	return 0;

}
/*
int len(int *p){
	int count=0;
	count=sizeof(p)/sizeof(p[0]);
	return count;
}
/*
int lent(int *p){
	int len；

}

*/