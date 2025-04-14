#include<stdio.h>
void bubble_sort(int *p,int len);//排序
void jh(int *i,int *j);//交换

#define ARRAY_LENGTH(arr) sizeof(arr)/sizeof(arr[0])//宏定义

int main(){
	int len;
	int a[]={1,2,3,4,5,6,7,8,9,10};
	len=ARRAY_LENGTH(a);
	int *p=a;
	printf("长度为:%d \n",len);
	printf("%d %d \n",p[0],(a[1]));
	bubble_sort(p,len);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d \n",p[i]);/* code */
	}
	
	return 0;
}

void bubble_sort(int *p,int len){
	int i,j;
	for(i=0;i<len;i++){
		for (j = i+1; j < len; ++j)
		{
			if(p[i]<p[j]){
				jh(&(p[i]),&(p[j]));
			}/* code */
		}
	}
}

void jh(int *i,int *j){
	int d;
	d=*i; //d的值等于 指针i的值
	*i=*j;//*i 指针i中的值等于指针j的值，地址不变
	*j=d;//*j 指针j中的值等于d的值
}