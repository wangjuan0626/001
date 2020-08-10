#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct ListNode 
{   
	int val;//数据域 
	struct ListNode *next;//指针域 
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
	int cout=0,i=0;
	struct ListNode *node,*p,*h;
	h=p=head; 
	//当指针不为空时 
	while(h->next!=NULL)
    {  
		cout++;
		h=h->next;
    }
    //当指针为空时 
	if(cout==0)
    {   
		p=p->next;  
		head->next=NULL;
    }
	while(head->next!=NULL) 
    {
    	//假设i为要删除的节点 
		if(i==cout-n)
		{
			//如果i不等于0 
			if(i!=0)
			{
				//删除节点 
     			node->next=head->next;
                head=node;
                break;
			}
			else if(i==0)
			{
                p=p->next;
                break;
			}
		}
		node=head;
		i++; 
		head=head->next;
    }
	return p;
}
int main()

{
	struct ListNode *p,*head,*l,*head2;
	int n;
	//分配内存 
	p=(struct ListNode*)malloc(sizeof(struct ListNode*));
	head=p;
	p->val=0;
	p->next=NULL;
	printf("请输入链表元素：\n");
	//链表数据初始化 
	do
    {
		scanf("%d",&p->val);
        l=(struct ListNode*)malloc(sizeof(struct ListNode*));
		l->val=0;
		l->next=NULL;
		p->next=l; 
		p=p->next;
	}while(getchar()!='\n');
	
	printf("请输入要删除的节点正序位置：");
	scanf("%d",&n);
	head2=removeNthFromEnd(head,n);
	while(head2->next!=NULL)
    {
		printf("%d",head2->val);
		head2=head2->next;
    }
	return 0;
}


