# ✨ Reverse of LinkedList ✨

Reverse the LinkedList

### Follow these steps : 

 - Take three pointer ```c(current) = head ``` , ```n(next) = head``` && ```p(previous)= NULL ```
 - we will break link of the first node and second and store the address of second node in ```n=c->next``` 
 - Link between the ```p``` and ```c``` using c->next = p;
 - Update ```p=c``` && ```c=n``` each time in loop til ```curr != NULL``` . 

### Code is :

```

node* reverseLL(node*head)
{
	node*p = NULL;
	node*c = head;
	node*n = head;

	while (c)
	{
		n = c->next;
		c->next = p;
		p = c;
		c = n;

	}
	return p;

}

```



