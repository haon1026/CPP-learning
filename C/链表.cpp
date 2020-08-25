# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

struct Node
{
	int data;
	struct Node * pNext; 
};

struct Node * Create_list(void);
void traverse_list (struct Node *);

int main(void)
{
	
	struct Node * pHead = NULL; 

	pHead = Create_list();    //Create_list()功能:创建一个非循环单链表,并将头指针赋给pHead
	traverse_list(pHead);

	return 0;
}

struct Node * Create_list(void)
{
	int len;     //用来存放有效结点的个数
	int i;
    int val;     //用来临时存放用户输入的结点的值

	//分配一个不存放有效数据的头结点
	struct Node * pHead = (struct Node *)malloc( sizeof(struct Node) );   //分配一块存储空间，把地址赋给pHead, pHead只存放了地址
	if (NULL == pHead)
	{
		printf("分配失败，程序终止！\n");
		exit(-1);

	}
	struct Node * pTail = pHead;   //如果pHead不为空指针，把pHead内容赋给pTail,pHead内容不再变动，函数结束时输出
	pTail->pNext = NULL;           //头指针存放的下一个结点地址先赋予空指针

	printf("请输入需要生成的链表结点的个数：len = ");
	scanf("%d",&len);

	for (i=0;i<len;++i)
	{
		printf("请输入第%d个节点的值：",i+1);
		scanf("%d",&val);

		struct Node * pNew = (struct Node *)malloc( sizeof(struct Node));     //每执行一次for循环,在当前的基础上重新分配一块存储空间,(不连续) 
		if (NULL == pNew)
		{
			printf("分配失败，程序终止！\n");
		    exit(-1);

		}
		pNew->data = val;
		pTail ->pNext = pNew;    
		pNew->pNext =NULL;      //最后一个结点存放的下一个结点地址赋予空指针
		pTail = pNew;

	}

	return pHead;

}

void traverse_list (struct Node * pHead)
{
	struct Node * p = pHead->pNext;

	while(p != NULL)
	{
		printf("%d\n",p->data);
	    p = p->pNext;

	}

    /*while(pHead->pNext != NULL)
	{
		pHead = pHead->pNext;
		printf("%d\n",pHead->data);

	}
    */
	return;

}