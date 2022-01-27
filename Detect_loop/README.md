#  ✨ Detect Loop in the Linked List ✨

Check whether the linked list has a loop or not.


```
Circular linkedList means last node is connected to the first node of the linkedlist.
```
### Follow these steps : 
 - If head == NULL , return false  Single node never form a circular Linked list .
 - We take example of Cicular race track, and two Person A and B.  is running at speed of x and <br />
 B is running with 2x speed.If the track is cicular then they must meet each other as some point, if the <br />
 track is straight then they never.Considering this point we are writing the code.<br />
 - Take two pointer ```slow ``` && ```fast```  both point to head.
 - ```slow``` is increase by 1 step && ```fast``` is increased by 2 steps.
 - if ``` slow == fast ``` then return true means we meet at a point .
 - otherwise return false.

### Code is :

```

bool detectLoop(node*&head)
{
	if (head == NULL) return false;
	node*slow = head;
	node*fast = head;

	while (fast && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) return true;
	}

	return false;
}

```



# ✨ Remove Loop in the Linked List ✨


First part we detected the loop and it has loop then for removing the we need to access the first and last node .

### Follow these steps : 
 - 

### Code is :

```



```



> Note:```head ==NULL ``` special case for loop checking ... 

