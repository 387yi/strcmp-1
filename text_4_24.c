#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<stdio.h>
//����
int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++) {
		printf("����������");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//strcmp����ַ����Ƿ���ȣ���ȷ���0������ȷ��ر�0���ֵ
		{
			printf( "��¼�ɹ�\n" );
			break; 
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i==3)
	{
		printf("��������������Σ��˳�����");
	}
}