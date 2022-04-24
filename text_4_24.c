#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<stdio.h>
//密码
int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++) {
		printf("请输入密码");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//strcmp检查字符串是否相等，相等返回0，不相等返回比0大的值
		{
			printf( "登录成功\n" );
			break; 
		}
		else
		{
			printf("输入错误\n");
		}
	}
	if (i==3)
	{
		printf("输入密码错误三次，退出程序");
	}
}