#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h >
#include <iostream>
#include <queue>

//using std::cout;
//using std::cin;
//using std::endl;
//using std::queue;
//#define Stack_Size 50
////定义二叉树
//typedef struct Node
//{
//	char data;
//	struct Node*LChild;
//	struct Node*RChild;
//}BiTNode, *BiTree;
////顺序栈
//typedef struct
//{
//	BiTree elem[Stack_Size];
//	int top;
//}SeqStack;
//
////创造二叉树
//void CreatBiTree(BiTree*bt)
//{
//	char ch;
//	ch = getchar();
//	if (ch == '.')
//		*bt = NULL;
//
//	else
//	{
//		*bt = (BiTree)malloc(sizeof(BiTNode));
//		(*bt)->data = ch;
//		CreatBiTree(&((*bt)->LChild));
//		CreatBiTree(&((*bt)->RChild));
//	}
//}
//
//
//
////访问结点数据
//void Visit(char t)
//{
//	printf("%2c", t);
//}
//
////中序递归遍历二叉树
//void InOrder(BiTree root)
//{
//	if (root != NULL)
//	{
//		InOrder(root->LChild);
//		Visit(root->data);
//		InOrder(root->RChild);
//	}
//}
//
////中序非递归遍历二叉树
//void inorder(BiTree root)
//{
//	SeqStack S;
//	int top = 0;
//	BiTree p = root;
//	do
//	{
//		while (p != NULL)
//		{
//			if (top > SIZE_MAX)
//				return;
//			top++;
//			S.elem[top] = p;
//			p = p->LChild;
//		}
//		if (top != 0)
//		{
//			p = S.elem[top];
//			top--;
//			Visit(p->data);
//			p = p->RChild;
//		}
//	} while (p != NULL || top != 0);
//}
//
///*按层次遍历二叉树*/
//void level_traverse(BiTree proot)
//{
//	if (proot == NULL)
//		return;
//
//	queue <BiTree> que;
//	que.push(proot);
//	while (!que.empty())
//	{
//		proot = que.front();
//		que.pop();
//		cout << "遍历节点：" << proot->data << endl;
//		if (proot->LChild != NULL)
//		{
//			que.push(proot->LChild);
//		}
//		if (proot->RChild != NULL)
//		{
//			que.push(proot->RChild);
//		}
//	}
//}
//
////求二叉树高度
//int depth = 0;
//void PreTreeDepth(BiTree bt, int h)
//{
//	if (bt != NULL)
//	{
//		if (h > depth) depth = h;
//		PreTreeDepth(bt->LChild, h + 1);
//		PreTreeDepth(bt->RChild, h + 1);
//	}
//}
//
////统计结点数目
//int NodeCountOfBiTree(BiTree T)
//{
//	if (T == NULL)
//		return 0;
//	else
//		return 1 + NodeCountOfBiTree(T->LChild) + NodeCountOfBiTree(T->RChild);
//}
//
////统计叶子结点数目
//int LeafCount = 0;
//void leaf(BiTree root)
//{
//	if (root != NULL)
//	{
//		leaf(root->LChild);
//		leaf(root->RChild);
//		if (root->LChild == NULL&&root->RChild == NULL)
//			LeafCount++;
//	}
//}
//
////交换左右子树
//void ChangeLR(BiTree &T)
//{
//
//	printf("先序输入节点，以空格虚设\n");
//	InOrder(T);
//	printf("\n");
//
//	printf("交换节点\n");
//	BiTree temp;
//	if (T->LChild == NULL&&T->RChild == NULL)
//		return;
//	else
//	{
//		temp = T->LChild;
//		T->LChild = T->RChild;
//		T->RChild = temp;
//	}//交换左右孩子
//	ChangeLR(T->LChild);  
//	ChangeLR(T->RChild); 
//	printf("中序遍历的结果为\n");
//	inorder(T);
//	printf("\n");
//}
//
//void menu()
//{
//	printf("\n************菜单*******************\n");
//	printf("	1、创造二叉树					  \n");
//	printf("	2、中序递归遍历二叉树				  \n");
//	printf("	3、中序非递归遍历二叉树			  \n");
//	printf("	4、按层次遍历二叉树				  \n");
//	printf("	5、求二叉树高度					  \n");
//	printf("	6、统计结点数目					  \n");
//	printf("	7、统计叶子结点数目				  \n");
//	printf("	8、交换左右子树					  \n");
//	printf("\n***********************************\n");
//	printf("  请输入对应数字进行操作:");
//}
//BiTree T = NULL;
//int main()
//{
//	int i = 0;
//	int h = 0;
//	char a = '\0';
//	int flag = 1;
//	menu();
//	while (flag)
//	{
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			printf("请开始\n");
//			a = getchar();
//			CreatBiTree(&T);
//			printf("操作已完成！");
//			break;
//		case 2:
//			InOrder(T);
//			printf("操作已完成！");
//			break;
//		case 3:
//			inorder(T);
//			printf("操作已完成！");
//			break;
//		case 4:
//			level_traverse(T);
//			printf("操作已完成！");
//			break;
//		case 5:
//			PreTreeDepth(T, h);
//			printf("高度为：%d\n", depth);
//			printf("操作已完成！");
//			break;
//		case 6:
//			printf("结点数目:%d\n", NodeCountOfBiTree(T));
//			printf("操作已完成！");
//			break;
//		case 7:
//			leaf(T);
//			printf("叶子结点数目:%d\n", LeafCount);
//			printf("操作已完成！");
//			break;
//		case 8:
//			ChangeLR(T);
//			printf("操作已完成！");
//			break;
//		default:
//			break;
//		}
//		printf("\n是否继续（输入0就停止）：");
//		scanf("%d", &flag);
//	}
//	return 0;
//}

#define TRUE 1
#define FALSE 0
#define LIST_SIZE 20

//有序表
typedef struct
{
	int key;

}RecordType;
typedef struct
{
	RecordType r[LIST_SIZE];//r[0]为工作单元
	int length;
}RecordList, *Recordlist;

//定义二叉树
typedef struct Node
{
	char data;
	struct Node*LChild;
	struct Node*RChild;
}BiTNode, *BiTree;

//二叉链表
typedef struct node
{
	int key;
	struct node*lchild, *rchild;
}BSTNode, *BSTree;

//进表操作
RecordList Push(RecordList l)
{
	int top = 1;
	int flag = 1;
	printf("请输入（-1为结束符号）：\n");
	while (flag)
	{
		scanf("%d", &l.r[top].key);
		if (l.r[top].key == -1)
		{
			flag = 0;
			break;
		}
		if (top == LIST_SIZE - 1)
		{
			top = -1;
			printf("表满了！");
			break;
		}
		top++;
	}
	l.length = top;
	printf("操作完成！你的表为:\n");
	for (int i = 1; i <= l.length; i++)
	{
		printf("%4d", l.r[i].key);
	}
	printf("\n");
	return(l);
}

//查找有序表
int BinSrch(RecordList l, int k)
{
	int mid;
	int low = 1;
	int high = l.length;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (k == l.r[mid].key)
			return(mid);
		else if (k < l.r[mid].key)
		{
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return(0);
}

//二叉排序树插入操作
void InsertBST(BSTree*bst, int key)
{
	BSTree s;
	if (*bst == NULL)
	{
		s = (BSTree)malloc(sizeof(BSTNode));
		s->key = key;
		s->lchild = NULL;
		s->rchild = NULL;
		*bst = s;
	}
	else if (key<(*bst)->key)
	{
		InsertBST(&((*bst)->lchild), key);
	}
	else if (key>(*bst)->key)
	{
		InsertBST(&((*bst)->rchild), key);
	}

}

//创建二叉排序树
void CreateBST(BSTree*bst)
{
	int key;
	*bst = NULL;
	scanf("%d", &key);
	while (key != -1)
	{
		InsertBST(bst, key);
		scanf("%d", &key);
	}
}

BSTree SearchBST(BSTree bst, int key)
{
	if (!bst)
		return NULL;
	else if (bst->key == key)
	{
		printf("找到了！\n");
		return bst;
	}
	else if (bst->key>key)
		return SearchBST(bst->lchild, key);
	else
	{
		return SearchBST(bst->rchild, key);
	}
}

BSTNode*DelBST(BSTree t, int k)
{
	BSTNode*p, *f, *s, *q;
	p = t; f = NULL;
	while (p)
	{
		if (p->key == k)
		{
			f = p;
			break;
		}
		if (p->key > k)
			p = p->lchild;
		else
			p = p->rchild;
	}
	if (p == NULL)
		return t;
	if (p->lchild == NULL)
	{
		if (f == NULL)
			t = p->rchild;
		else if (f->lchild == p)
		{
			f->lchild = p->rchild;
		}
		else
			f->lchild = p->rchild;
		free(p);
	}
	else
	{
		q = p;
		s = p->lchild;
		while (s->rchild)
		{
			q = s;
			s = s->rchild;
		}
		if (q == p)
			q->lchild = s->lchild;
		else
		{
			q->rchild = s->lchild;
		}
		p->key = s->key;
		free(s);
	}
	printf("删除完成\n");
	return t;
}

void menu()
{
	printf("\n************菜单*******************\n");
	printf("	1、关键字的查找					  \n");
	printf("	2、建立二叉排序树					  \n");
	printf("	3、二叉排序树中删除				  \n");
	printf("\n***********************************\n");
	printf("  请输入对应数字进行操作:");

}
int main()
{
	RecordList L;
	L.length = 0;
	BSTree bst = NULL;
	int i = 0;
	int flag = 1;
	int Key = 0;
	int find = 0;
	int delete_word = 0;
	menu();
	while (flag)
	{
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("请开始\n");
			L = Push(L);
			printf("你要查找的元素：\n");
			scanf("%d", &Key);
			printf("ta的位置在：");
			printf("%2d", find = BinSrch(L, Key));
			printf("操作已完成！\n");
			break;
		case 2:
			CreateBST(&bst);
			printf("请输入你要查找的关键词：\n");
			scanf("%d", &find);
			SearchBST(bst, find);
			printf("操作已完成！\n");
			break;
		case 3:
			printf("请输入你要删除的关键词：\n");
			scanf("%d", &delete_word);
			DelBST(bst, delete_word);
			printf("操作已完成！\n");
			break;
		default:
			break;
		}
		printf("\n是否继续（输入0就停止）：");
		scanf("%d", &flag);
	}
}