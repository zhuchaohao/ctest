#include<stdio.h>

int Max(int num1,int num2); //比较两个数大小，返回较大的值

int main()
{
	/* code */
	int num;
	num=Max(10,20);
	printf("%d",num);
	return 0;
}


/*********比较两数大小，返回较大的值**********/
int Max(int num1,int num2)
{
	int max;
	if (num1>num2)
	{
		max=num1;
	}
	else
	{
		max=num2;
	}

	return max;
}