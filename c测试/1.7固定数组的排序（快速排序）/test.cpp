#include<stdio.h>

//void jh(int *i,int *j);
int main()
{
	int *high,*low,pivot,*inp;
	int a[7]={23,12,49,6,31,19,28};

	low=&a[0],high=&a[6],pivot=a[0];
	while(high!=low)
	{
		while(high!=low){

		if(*high>pivot){high--;}
			else{*low=*high;low++;break;}
		}
		while(high!=low){
		if(*low<pivot){low++;}
			else{*high=*low;high--;break;}
		}
	}
	*low=pivot;

	inp=high,high--,low=&a[0],pivot=a[0];
	while(high!=low)
	{
		while(high!=low){

		if(*high>pivot){high--;}
			else{*low=*high;low++;break;}
		}
		while(high!=low){
		if(*low<pivot){low++;}
			else{*high=*low;high--;break;}
		}
	}
	*low=pivot;

	for (int i = 0; i < 7; ++i)
	{
		printf("%d ",a[i] );
	}



}
/***
void jh(int *i,int *j){
	int d;
	d=*i; //d的值等于 指针i的值
	*i=*j;//*i 指针i中的值等于指针j的值，地址不变
	*j=d;//*j 指针j中的值等于d的值
}
**/