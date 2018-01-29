#include<stdio.h>
int main()
{
	float f,c;
	printf("请输入一个华氏温度：");
	scanf("%f",&f);
	c=(5.0/9)*(f-32);               /*float型数字要用至少一个.0*/ 
	printf("摄氏温度为：%f\n",c); 
	
}
