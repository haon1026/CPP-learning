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

	pHead = Create_list();    //Create_list()����:����һ����ѭ��������,����ͷָ�븳��pHead
	traverse_list(pHead);

	return 0;
}

struct Node * Create_list(void)
{
	int len;     //���������Ч���ĸ���
	int i;
    int val;     //������ʱ����û�����Ľ���ֵ

	//����һ���������Ч���ݵ�ͷ���
	struct Node * pHead = (struct Node *)malloc( sizeof(struct Node) );   //����һ��洢�ռ䣬�ѵ�ַ����pHead, pHeadֻ����˵�ַ
	if (NULL == pHead)
	{
		printf("����ʧ�ܣ�������ֹ��\n");
		exit(-1);

	}
	struct Node * pTail = pHead;   //���pHead��Ϊ��ָ�룬��pHead���ݸ���pTail,pHead���ݲ��ٱ䶯����������ʱ���
	pTail->pNext = NULL;           //ͷָ���ŵ���һ������ַ�ȸ����ָ��

	printf("��������Ҫ���ɵ�������ĸ�����len = ");
	scanf("%d",&len);

	for (i=0;i<len;++i)
	{
		printf("�������%d���ڵ��ֵ��",i+1);
		scanf("%d",&val);

		struct Node * pNew = (struct Node *)malloc( sizeof(struct Node));     //ÿִ��һ��forѭ��,�ڵ�ǰ�Ļ��������·���һ��洢�ռ�,(������) 
		if (NULL == pNew)
		{
			printf("����ʧ�ܣ�������ֹ��\n");
		    exit(-1);

		}
		pNew->data = val;
		pTail ->pNext = pNew;    
		pNew->pNext =NULL;      //���һ������ŵ���һ������ַ�����ָ��
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