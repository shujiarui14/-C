#include <stdio.h>
#include<string.h>
void main()
{ 
	char a[20];
	int i;
	printf("请输入字符串：");
	gets(a);
	for(i=strlen(a)-1;i>=0;i--)
		printf("%c",a[i]);
	printf("\n");
}

