#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
//int main(){
//	int i = 0;
//	int a = 0;
//	int sum = 0;
//	int Sn = 0;
//	printf("请输入数：\n");
//	scanf("%d", &a);
//	for (i = 1; i <= 5; i++){
//		sum = sum * 10 + a;
//		Sn = Sn + sum;
//	}
//	printf("%d", Sn);
//	system("pause");
//	return 0;
//}

//水仙花数：
//int fun_mi(int a, int b){//创建a的b次方的函数。
//	if (b != 0){
//		return a*fun_mi(a, b - 1);
//	}
//	else{
//		return 1;
//	}
//}
//int main(){
//	printf("1—100000之间的水仙花数为：");
//	for (int i = 0; i <= 100000; i++){
//		int temp = i;
//		int b = 0;//temp的位数.
//		while (temp){
//			temp = temp / 10;
//			b++;
//		}
//		int sum = 0;//计算各个数幂的和。
//		temp = i;
//		while (temp){
//			int a = temp % 10;//保留a的个位。
//			int num = fun_mi(a, b);
//			temp = temp / 10;//向高位移。
//			sum = sum + num;
//		}
//		if (sum == i){
//			printf(" %d ",i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//打印菱形
//int main(){
//	int row = 0;
//	int i = 0;
//	printf("请输入菱形的最大行：\n");
//	scanf("%d", &row);
//	//打印上半部分。
//	for (i = 0; i < row; i++){
//		for (int j = 0; j < row - 1 - i; j++){
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < row-1; i++){//row-1避免重复打印最多的一行.
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

//汽水瓶问题。
//int main(){
//	int m = 0;
//	printf("钱数：");
//	scanf("%d", &m);
//	int count = m;//最开始买的汽水m瓶。
//	int p = m;//剩下的瓶子.
//	while (p >= 2){
//		count = count + p / 2;//可以喝的瓶数。
//		p = p / 2 + p % 2;//瓶子个数。
//	}
//	printf("总共可以喝%d瓶汽水。\n",count);
//	return 0;
//}
