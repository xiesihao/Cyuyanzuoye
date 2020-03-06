#include<stdio.h>

main()

{
	int a,d,n,s;				//定义整数a，d，n，s 
	printf("请输入首项a:");
	scanf("%d",&a);
	printf("请输入公差d:"); 
	scanf("%d",&d);
	printf("请输入项数n:");
	scanf("%d",&n);
	s=n*a+d*n*(n-1)/2;			//计算前n项和 
	printf("前n项和为：%d",s);
	return 0; 
 } 
