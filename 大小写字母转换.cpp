#include<stdio.h>
int main()
{
	char g;
	printf("请输入一个小写字母：\n");
	scanf("%c",&g);
	if (g>='a'&&g<='z')
		g=g-32;
	printf("大写字母是:%c",g);
}          /*取地址啊啊啊啊啊啊，老是记不住*/ 
