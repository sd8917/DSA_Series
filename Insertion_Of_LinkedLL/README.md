* InsertionAtFront

For inserting element at front we need to have always access to the first node,
each time we insert the element at front we update the head node

### Follow these steps : 
 - If head == NULL , head = new node(data) ;
 - Otherwise , we create a new  node n using new node(data);
 - Now we update connect head and new node 
 ``` n->next = head``` 
 - Update the head to get access to first node always , point to head.
 ``` head = n```

### Code is :

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




* InsertionAtEnd


For inserting element at end we need to have always access to the last node,
so take temporary pointer and reach to the end of the linkedlist for insertion operation.

### Follow these steps : 
 - If head == NULL , head = new node(data) ;
 - otherwise , we create a temperory pointer pointing to head 
 <br />
 	``` temp = head ```
 <br />
 	Iterate till end of the linked using this pointer. 
 - create node now <br />
 		``` node*n = new node(data) ;  
 		```
 	assign to temp->next <br /> 
 - At last  ``` temp->next->next = NULL ``` 

### Code is :

```

void insertAtEnd(node*&head, int data)
{

	if (head == NULL)
	{
		head = new node(data);
		return;
	}
	else {
		// to reach to the end of the linkedList for insertion..
		node*temp = head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new node(data);
		temp->next->next = NULL;
		return;
	}

}

```


* InsertionAtMiddle

```Check middle of the linked list
```

* InsertionAtPos 


For Inserting element at pos we need to have always access to the node just before it,
so take temporary pointer and reach to the that of the linkedlist for insertion operation.

### Follow these steps : 
 - If ``` pos == 0```  ```insertAtFront(head,data) ``` .
 - otherwise ``` pos >= length of linkedlist - 1```  ```insertAtEnd(head,data)``` .

 - Iterate till pos of the linked using ```temp = head ``` pointer till ``` <= pos-1 ```.  
  <br />
 		``` 
 		int count = 1;
		while (count <= pos - 1) {
			temp = temp->next;
			count++;
		} ;  
 		```
 	create new node ``` node *n = new node(data) ```<br /> 
 - for making connection of the created node with two node 
 	``` 
 	    n->next = temp->next;
		temp->next = n 
	``` 


### Code is :

```


void InsertionAtPos(node* &head, int pos, int data) {
	//if it at 0 means at front pos
	if (pos == 0) {
		insertAtFront(head, data);
	}
	else if (pos >= lengthLL(head) - 1) {
		insertAtEnd(head, data);
	}
	else {
		node* temp = head;
		int count = 1;
		while (count <= pos - 1) {
			temp = temp->next;
			count++;
		}

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

```




### Length of the LinkedList

For Length of the linkedList we need to have some variable ``` c ``` <br />
which increase as we move to differnt node of the linkedlis using ```head = head->next``` till ``` head != NULL ```

```
int lengthLL(node*head)
{
	int len = 0;

	while (head)
	{
		head = head->next;
		len++;
	}
	return len;
}


```



> Note: `head` is passed as reference during insertion . So pass reference whatever changes made in the function is also
reflected in main also. whereas pass value will change the value in the function only

```
passByValue and passByReference

```