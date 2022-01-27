#  Intersecion of LinkedList ✨

we have to find out the intersection point of two linked list.
we have given two linkedlist head1 and head2.

t

### Follow these steps : 
 - Take two pointer two each node of the linked list  ```curr1``` && ```curr2```.
 - If there is intersection ```curr1``` && ```curr2``` must be becaause we iterate in such way the extra amount can be iterate
  like.. .
  ```
  	if(curr1==NULL)  curr1 = head2;

  	else curr1 = curr1->next;
  ```
  ```
  	if(curr2==NULL)  curr2 = head1;
  	else curr2 = curr2->next;

  ```
 - return curr1->data;
 

### Code is :

```

int intersectionPoint(node*head1, node*head2)
{
	node*curr1 = head1;

	node*curr2 = head2;

	while (curr1 != curr2)
	{
		if (curr1 == NULL)
		{
			curr1 = head2;
		}
		else {
			curr1 = curr1->next;
		}


		if (curr2 == NULL) {
			curr2 = head1;
		}
		else {
			curr2 = curr2->next;
		}
	}

	return curr1->data;
}

```



