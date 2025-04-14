#include<stdio.h>
int add(int a,int b);
int main()
{
   int sum,num1,num2;
   printf("输入第一个数：");
   scanf("%d",&num1);
   printf("输入第二个数：");
   scanf("%d",&num2);
   sum=add(num1,num2);
   printf("相加等于：%d\n",sum );
   return 0;


}

int add(int a,int b)
{
   return a+b;
}