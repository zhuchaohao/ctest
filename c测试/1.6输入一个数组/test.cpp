#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count;
	int i=0;
	printf("数组元素个数:");
	scanf("%d",&count);
	int *arr = (int *)malloc(count * sizeof(int));
	for(i=0;i<count;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<count;i++){
		printf("%d ",arr[i]);
	}

	free(arr);
	return 0;
}
/*1. 在函数定义时，通过在函数名前添加"*"指明函数返回值为地址值。
2. 在函数返回值语句return中指明返回的地址值。
3. 主函数中接收返回值的变量也应为指针类型。需要注意的是，C语言不支持在调用
	函数时返回局部变量的地址，除非定义局部变量为static变量。

int *InputArrint(int count)
{
	int i;
	int *arr = (int *)malloc(count * sizeof(int));

	free(arr);
	return *arr;
}
*/

