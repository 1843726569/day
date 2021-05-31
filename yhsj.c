#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//杨辉三角。
//#define H 9//限定最高行并且第n行的数字有n项
//void yhsj(int arr[H][H]){
//	for (int row = 0; row < H; row++){
//		for (int col = 0; col <= row; col++){
//			arr[row][0] = 1;//每一行首位为一。
//			if (row>=1 && col>=1){
//				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];//每个数等于它上方两数之和。
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


//日本四选一案件。


//int main()
//{
//	int i = 0;//假设i是凶手。
//	for (i = 'A'; i < 'D'; i++)
//		//利用ASCII码连续遍历四人
//	{
//		if ((i != 'A') + (i == 'C') + (i == 'D') + (i != 'D') == 3)
//			//判断条件，三个人只有一人说真话
//		{
//			printf("凶手是： %c\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}


//猜名次/
//int main()
//{
//	for (int a = 1; a <= 5; a++){
//		for (int b = 1; b <= 5; b++){
//			for (int c = 1; c <= 5; c++){
//				for (int d = 1; d < 5; d++){
//					for (int e = 1; e < 5; e++){
//						if (a*b*c*d*e == 120){
//							//满足题目条件(每人说对一半)
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

