#include<stdio.h>
int main()
{
	char g;
	printf("������һ��Сд��ĸ��\n");
	scanf("%c",&g);
	if (g>='a'&&g<='z')
		g=g-32;
	printf("��д��ĸ��:%c",g);
}          /*ȡ��ַ�����������������Ǽǲ�ס*/ 
