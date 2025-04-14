#include<stdio.h>
void bubble_sort(int *p);//排序
void jh(int *i,int *j);

#define ARRAY_LENGTH(arr)=sizeof(arr)/sizeof(arr[0])

int main(){

	int a[]={1,2,3,4,5,6,7,8,9,10};
	int *p=a;
	printf("%d %d \n",p[0],(a[1]));
	bubble_sort(p);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d \n",p[i]);/* code */
	}
	printf("长度：%d",ARRAY_LENGTH(a))
	return 0;
}

void bubble_sort(int *p){
	int i,j;
	for(i=0;i<10;i++){
		for (j = i+1; j < 10; ++j)
		{
			if(p[i]<p[j]){
				jh(&(p[i]),&(p[j]));
			}/* code */
		}
	}
}
/*******
void bubble_sort(unsigned int *p)
{
	unsigned int i,j;
	for(i = 0; i<10; ++i)
	{
		for (j=i; j < 10; j++)
		{
			if(p[i]<p[j])
			{
				jh(*(p+i),*(p+j));
			}
			
		}
	}
} 
*/



void jh(int *i,int *j){
	int d;
	d=*i; //d的值等于 指针i的值
	*i=*j;//*i 指针i中的值等于指针j的值，地址不变
	*j=d;//*j 指针j中的值等于d的值
}