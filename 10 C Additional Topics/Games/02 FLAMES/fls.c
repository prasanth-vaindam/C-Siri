#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int count;

struct Node
{
	int data;
	char c;
	struct Node *next;
};

int mcc()
{
	int l1=0, l2=0, i=0, c=0, j=0;
	char girl[50],boy[50];
	printf("Enter Girl's name: ");
	fgets(girl,50,stdin);
	printf("Enter Boy's name: ");
	fgets(boy,50,stdin);
	l1 = namelength(girl);
	l2 = namelength(boy);

	while ( girl[i]!= '\n' )
	{
		if(isalpha(girl[i]))
		{
		}
		else
		{
			i++;
			continue;
		}
		j=0;
		while (boy[j]!='\n')
		{
			if(i==0){
				if(isalpha(boy[j]))
				{
				}
			}
			if(girl[i] == boy[j])
			{
				boy[j] = '*';
				c++;
				j++;
				break;
			}
			j++;
		}
		i++;
	}
	c = (l1+l2) - (2*c);
	return c;
}

int namelength(char str[])
{
	int len=0, i=0;
	while(str[i] != '\0' && str[i] != '\n')
	{
		if(isalpha(str[i]))
		{
			len++;
		}
		i++;
	}
	return len;
}

struct Node* flames(struct Node* head, int n)
{
	int i;

	struct Node *tail, *prev, *cur, *temp;

	if(n==1){
		temp = head;
		head = head->next;
		free (temp);
		count--;
		return head;
	}

	cur = prev = tail = head;
	
	while(tail->next != NULL)
		tail = tail->next;
	tail->next = head;

	for(i=1; i<=n-1; i++)
		cur = cur->next;

	for(i=1; i<=n-2; i++)
		prev = prev->next;

	head = cur->next;
	prev->next = NULL;
	cur->next = NULL;
	free(cur);
	count--;

	return head;
}

struct Node* Insert(struct Node* head, char c){
	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->c = c;
	temp->next = NULL;
	if(head == NULL) head = temp;
	else {
		struct Node* temp1 = head;
		while(temp1->next != NULL) temp1 = temp1->next;
		temp1->next = temp;
	}
	count++;
	return head;
}

void print(struct Node* p)
{
	if(p == NULL)
		return;
	printf("%c ", p->c);
	print(p->next);
}

int main()
{
	struct Node* head = NULL; //Local Variable

	while(1){
		int n;
		int index;

		n = mcc();
		index = n;
		head = Insert(head,  'f');
		head = Insert(head,  'l');
		head = Insert(head,  'a');
		head = Insert(head,  'm');
		head = Insert(head,  'e');
		head = Insert(head,  's');
		while(count>1)
		{
			if(n > count)
			{
				index = n%count;
				if(!index)index = count;
			}
			head = flames(head, index);
		}
		switch(head->c)
		{
			case 'f': printf("You guys are friends! cool guys... have lots of fun and adventure\n"); 
					break;
			case 'l': printf("You are the love birds\n"); 
					break;
			case 'a': printf("You both have a lot of affection towards each other, keep it up,. \n");
					break;
			case 'm': printf("You both together make a great couple, marriages are made in haven\n");
					break;
			case 'e': printf("You guys are enemies! stay away... j.kidding... afterall this is a program\n");
					break;
			case 's': printf("You guys are sibilings! Have fun\n");
					break;
			default: printf("god knows...\n");
		}
	}
	
}

