#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ַ���������
//void revolve(char* start,char* end,int k){
//	while (*end != '\0'){
//		*start = *start^*end;
//		*end = *start^*end;
//		*start = *start^*end;
//		start++;
//		end++;
//	}
//}
//int main(){
//	char a[100];
//	printf("�����룺\n");
//	scanf("%s", &a);
//	printf("��������ת������\n");
//	int n = 0;
//	int k = (int)strlen(a);
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++){
//		revolve(a, a + 1, k);
//	}
//	printf("��ת���ַ���Ϊ��%s \n", a);
//	system("pause");
//	return 0;
//}

//�жϸ����ַ����Ƿ�Ϊ��һ�ַ�����ת�õ�.
//void revolve(char* start, char* end, int k){
//	while (*end != '\0'){
//		*start = *start^*end;
//		*end = *start^*end;
//		*start = *start^*end;
//		start++;
//		end++;
//	}
//}
//int main(){
//	printf("������Ҫ�Ƚϵ��ַ�����\n");
//	char a[100];
//	char b[100];
//	int x = 0;
//	scanf("%s %s", &a, &b);
//	int k = (int)strlen(a);
//	for (int i = 0; i <= k; i++){
//		revolve(a, a + 1, k);
//		if (strcmp(a,b)==0){
//			x = 1;
//			printf("1\n");
//			break;
//		}
//	}
//	if (x != 1){
//		printf("0\n");
//	}
//	system("pause");
//	return 0;
//}

//���Ͼ���
#define ROW 3
#define COL 3
//�ھ�����Ѱ���Ƿ������Ӧ������
int fund_yang(int arr[ROW][COL], int *row, int *col,int n){
	*row = 0;
	*col = COL - 1;
	while (*row < ROW&&*col >= 0){
		if (arr[*row][*col]>n){
			(*col)--;
		}
		else if(arr[*row][*col] < n){
			(*row)++;
		}
		else
			return 1;
	}
	return 0;
}
int main(){
	int arr[ROW][COL] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	int row = 0;
	int col = 0;
	int in = 0;
	printf("������ҪѰ�ҵ�����\n");
	scanf("%d", &in);
	int num = fund_yang(arr, &row, &col, in);
	if (num == 1){
		printf("������ͬ������\n");
	}
	else{
		printf("�����ڡ�\n");
	}
	system("pause");
	return 0;
}