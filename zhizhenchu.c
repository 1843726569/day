#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
//int main(){
//	int i = 0;
//	int a = 0;
//	int sum = 0;
//	int Sn = 0;
//	printf("����������\n");
//	scanf("%d", &a);
//	for (i = 1; i <= 5; i++){
//		sum = sum * 10 + a;
//		Sn = Sn + sum;
//	}
//	printf("%d", Sn);
//	system("pause");
//	return 0;
//}

//ˮ�ɻ�����
//int fun_mi(int a, int b){//����a��b�η��ĺ�����
//	if (b != 0){
//		return a*fun_mi(a, b - 1);
//	}
//	else{
//		return 1;
//	}
//}
//int main(){
//	printf("1��100000֮���ˮ�ɻ���Ϊ��");
//	for (int i = 0; i <= 100000; i++){
//		int temp = i;
//		int b = 0;//temp��λ��.
//		while (temp){
//			temp = temp / 10;
//			b++;
//		}
//		int sum = 0;//����������ݵĺ͡�
//		temp = i;
//		while (temp){
//			int a = temp % 10;//����a�ĸ�λ��
//			int num = fun_mi(a, b);
//			temp = temp / 10;//���λ�ơ�
//			sum = sum + num;
//		}
//		if (sum == i){
//			printf(" %d ",i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//��ӡ����
//int main(){
//	int row = 0;
//	int i = 0;
//	printf("���������ε�����У�\n");
//	scanf("%d", &row);
//	//��ӡ�ϰ벿�֡�
//	for (i = 0; i < row; i++){
//		for (int j = 0; j < row - 1 - i; j++){
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < row-1; i++){//row-1�����ظ���ӡ����һ��.
//		for (int j = 0; j < i + 1; j++){
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (row - 1 - i) - 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//
//}

//��ˮƿ���⡣
//int main(){
//	int m = 0;
//	printf("Ǯ����");
//	scanf("%d", &m);
//	int count = m;//�ʼ�����ˮmƿ��
//	int p = m;//ʣ�µ�ƿ��.
//	while (p >= 2){
//		count = count + p / 2;//���Ժȵ�ƿ����
//		p = p / 2 + p % 2;//ƿ�Ӹ�����
//	}
//	printf("�ܹ����Ժ�%dƿ��ˮ��\n",count);
//	return 0;
//}
