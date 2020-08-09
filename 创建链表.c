#include <stdio.h>
#include <stdlib.h>
struct node
{
	int num;//数据域 
	struct node *next;//指针域 
};
int main()
{
	//定义头节点，尾节点，普通节点 
	struct node *head,*tail,*bet;
	//分配地址 
	head=(struct node*)malloc(sizeof(struct node));
	//若是空链表，则头节点尾节点一样 
	tail=head;
	//链表初始化 
	for(int i=0;i<10;i++)
	{
		bet=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&bet->num);
		tail->next=bet;
		tail=bet;
	}
	tail->next=NULL;//结束创建
	//输出链表 
	while(head->next!=NULL)
	{
		head=head->next;
		printf("%d\t",head->num);
	}
	return 0; 
}
