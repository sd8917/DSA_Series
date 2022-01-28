# ✨ Intersecion of LinkedList ✨

Find the middle of the linked list i.e node at
leng/2 distance .

### Follow these steps : 
 - 
 

### Code is :

```

int middle_LinkeList(node*&head)
{
	node*slow = head;
	node*fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	return  slow->data;
}

```



