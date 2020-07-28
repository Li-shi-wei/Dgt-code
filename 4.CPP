#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Linklist
{
	float data;
	Linklist *next;
}Linklist, *Link;
int show(Link L,float sum,int i)
{
	printf("%.2f ",sum/i);
	if (L->next != NULL)
		L = L->next;
	while (L->next)
	{
		sum += L->data;
		printf("%.2f ", L->data);
		L = L->next;
	}
	printf("%.2f", L->data);
	sum += L->data;
	return 0;
}
int main()
{
	float sum = 0; int i = 0;
	Link p, q, head;
	p = new Linklist;
	p->next = NULL;
	head = q = p;
	float data;
	while (1)
	{
		scanf("%f", &data);
		if (data < 0)break;
		p = new Linklist;
		p->data = data;
		p->next = NULL;
		q->next = p;
		q = p;
		i++;
		sum += p->data;

	}
	show(head,sum,i);
}


