#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//������ǡ�
//#define H 9//�޶�����в��ҵ�n�е�������n��
//void yhsj(int arr[H][H]){
//	for (int row = 0; row < H; row++){
//		for (int col = 0; col <= row; col++){
//			arr[row][0] = 1;//ÿһ����λΪһ��
//			if (row>=1 && col>=1){
//				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];//ÿ�����������Ϸ�����֮�͡�
//			}
//			printf(" %d", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int arr[H][H] = { 0 };
//	yhsj(arr);
//	system("pause");
//	return 0;
//
//}


//�ձ���ѡһ������


//int main()
//{
//	int i = 0;//����i�����֡�
//	for (i = 'A'; i < 'D'; i++)
//		//����ASCII��������������
//	{
//		if ((i != 'A') + (i == 'C') + (i == 'D') + (i != 'D') == 3)
//			//�ж�������������ֻ��һ��˵�滰
//		{
//			printf("�����ǣ� %c\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}


//������/
//int main()
//{
//	for (int a = 1; a <= 5; a++){
//		for (int b = 1; b <= 5; b++){
//			for (int c = 1; c <= 5; c++){
//				for (int d = 1; d < 5; d++){
//					for (int e = 1; e < 5; e++){
//						if (a*b*c*d*e == 120){
//							//������Ŀ����(ÿ��˵��һ��)
//							if (((b == 2) + (a == 3) == 1) &&
//								((b == 2) + (e == 4) == 1) &&
//								((c == 1) + (d == 2) == 1) &&
//								((c == 5) + (d == 3) == 1) &&
//								((e == 4) + (a == 1) == 1))
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

