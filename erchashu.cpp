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
////���������
//typedef struct Node
//{
//	char data;
//	struct Node*LChild;
//	struct Node*RChild;
//}BiTNode, *BiTree;
////˳��ջ
//typedef struct
//{
//	BiTree elem[Stack_Size];
//	int top;
//}SeqStack;
//
////���������
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
////���ʽ������
//void Visit(char t)
//{
//	printf("%2c", t);
//}
//
////����ݹ����������
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
////����ǵݹ����������
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
///*����α���������*/
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
//		cout << "�����ڵ㣺" << proot->data << endl;
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
////��������߶�
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
////ͳ�ƽ����Ŀ
//int NodeCountOfBiTree(BiTree T)
//{
//	if (T == NULL)
//		return 0;
//	else
//		return 1 + NodeCountOfBiTree(T->LChild) + NodeCountOfBiTree(T->RChild);
//}
//
////ͳ��Ҷ�ӽ����Ŀ
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
////������������
//void ChangeLR(BiTree &T)
//{
//
//	printf("��������ڵ㣬�Կո�����\n");
//	InOrder(T);
//	printf("\n");
//
//	printf("�����ڵ�\n");
//	BiTree temp;
//	if (T->LChild == NULL&&T->RChild == NULL)
//		return;
//	else
//	{
//		temp = T->LChild;
//		T->LChild = T->RChild;
//		T->RChild = temp;
//	}//�������Һ���
//	ChangeLR(T->LChild);  
//	ChangeLR(T->RChild); 
//	printf("��������Ľ��Ϊ\n");
//	inorder(T);
//	printf("\n");
//}
//
//void menu()
//{
//	printf("\n************�˵�*******************\n");
//	printf("	1�����������					  \n");
//	printf("	2������ݹ����������				  \n");
//	printf("	3������ǵݹ����������			  \n");
//	printf("	4������α���������				  \n");
//	printf("	5����������߶�					  \n");
//	printf("	6��ͳ�ƽ����Ŀ					  \n");
//	printf("	7��ͳ��Ҷ�ӽ����Ŀ				  \n");
//	printf("	8��������������					  \n");
//	printf("\n***********************************\n");
//	printf("  �������Ӧ���ֽ��в���:");
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
//			printf("�뿪ʼ\n");
//			a = getchar();
//			CreatBiTree(&T);
//			printf("��������ɣ�");
//			break;
//		case 2:
//			InOrder(T);
//			printf("��������ɣ�");
//			break;
//		case 3:
//			inorder(T);
//			printf("��������ɣ�");
//			break;
//		case 4:
//			level_traverse(T);
//			printf("��������ɣ�");
//			break;
//		case 5:
//			PreTreeDepth(T, h);
//			printf("�߶�Ϊ��%d\n", depth);
//			printf("��������ɣ�");
//			break;
//		case 6:
//			printf("�����Ŀ:%d\n", NodeCountOfBiTree(T));
//			printf("��������ɣ�");
//			break;
//		case 7:
//			leaf(T);
//			printf("Ҷ�ӽ����Ŀ:%d\n", LeafCount);
//			printf("��������ɣ�");
//			break;
//		case 8:
//			ChangeLR(T);
//			printf("��������ɣ�");
//			break;
//		default:
//			break;
//		}
//		printf("\n�Ƿ����������0��ֹͣ����");
//		scanf("%d", &flag);
//	}
//	return 0;
//}

#define TRUE 1
#define FALSE 0
#define LIST_SIZE 20

//�����
typedef struct
{
	int key;

}RecordType;
typedef struct
{
	RecordType r[LIST_SIZE];//r[0]Ϊ������Ԫ
	int length;
}RecordList, *Recordlist;

//���������
typedef struct Node
{
	char data;
	struct Node*LChild;
	struct Node*RChild;
}BiTNode, *BiTree;

//��������
typedef struct node
{
	int key;
	struct node*lchild, *rchild;
}BSTNode, *BSTree;

//�������
RecordList Push(RecordList l)
{
	int top = 1;
	int flag = 1;
	printf("�����루-1Ϊ�������ţ���\n");
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
			printf("�����ˣ�");
			break;
		}
		top++;
	}
	l.length = top;
	printf("������ɣ���ı�Ϊ:\n");
	for (int i = 1; i <= l.length; i++)
	{
		printf("%4d", l.r[i].key);
	}
	printf("\n");
	return(l);
}

//���������
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

//�����������������
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

//��������������
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
		printf("�ҵ��ˣ�\n");
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
	printf("ɾ�����\n");
	return t;
}

void menu()
{
	printf("\n************�˵�*******************\n");
	printf("	1���ؼ��ֵĲ���					  \n");
	printf("	2����������������					  \n");
	printf("	3��������������ɾ��				  \n");
	printf("\n***********************************\n");
	printf("  �������Ӧ���ֽ��в���:");

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
			printf("�뿪ʼ\n");
			L = Push(L);
			printf("��Ҫ���ҵ�Ԫ�أ�\n");
			scanf("%d", &Key);
			printf("ta��λ���ڣ�");
			printf("%2d", find = BinSrch(L, Key));
			printf("��������ɣ�\n");
			break;
		case 2:
			CreateBST(&bst);
			printf("��������Ҫ���ҵĹؼ��ʣ�\n");
			scanf("%d", &find);
			SearchBST(bst, find);
			printf("��������ɣ�\n");
			break;
		case 3:
			printf("��������Ҫɾ���Ĺؼ��ʣ�\n");
			scanf("%d", &delete_word);
			DelBST(bst, delete_word);
			printf("��������ɣ�\n");
			break;
		default:
			break;
		}
		printf("\n�Ƿ����������0��ֹͣ����");
		scanf("%d", &flag);
	}
}