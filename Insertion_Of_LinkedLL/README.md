### InsertionAtFront

For inserting element at front we need to have always access to the first node,
each time we insert the element at front we update the head node

Follow these steps : 
 - if head == NULL , head = new node(data) ;
 - otherwise , we create a new  node n using new node(data);
 - now we update connect head and new node 
 ``` n->next = head``` 
 - Update the head to get access to first node always , point to head.
 ``` head = n```

Code is :

```

void insertAtFront(node*&head, int data)
{

	if (head == NULL)
	{
		head = new node(data);
		return;
	}
	else {
		node*n = new node(data);
		n->next = head;
		head = n;
	}

}


```




### InsertionAtEnd











### InsertionAtMiddle









### InsertionAtPosition 









### Length of the LinkedList











> Note: `head` is passed as reference during insertion . So pass reference whatever changes made in the function is also
reflected in main also. whereas pass value will change the value in the function only

```
passByValue and passByReference

```