/*
前言：
We used to look up at the sky and wonder at our place in the stars, 
now we just look down and worry about our place in the dirt.

我们曾经仰望星空，思考我们在宇宙中的位置，
而现在我们只会低着头，担心如何在这片土地上活下去。

*/

//计算地块面积的算法

#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("cls");//清屏
	float n1, n2;//浮点型
	printf("输入长度单位：（米）\n");
	scanf_s("%f",&n1);
	printf("输入宽度: （米)\n");
	scanf_s("%f", &n2);
	printf("长方形的面积是：%0.2f平方米\n", n1 * n2);
	return 0;
}


