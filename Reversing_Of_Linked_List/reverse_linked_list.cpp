#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;

//create a linked list..
class node {
public:
	int data;
	node*next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

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


//Reversed of the linked list

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


void printLL(node*head)
{
	while (head)
	{
		cout << head->data << "-> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	node*head = NULL;

	insertAtFront(head, 2);
	insertAtFront(head, 3);
	insertAtFront(head, 5);
	insertAtFront(head, 6);
	insertAtFront(head, 8);
	insertAtFront(head, 10);
	insertAtFront(head, 12);
	printLL(head);

	cout << "Middle of linkedList : " << middle_LinkeList(head) << endl;

	node* rev = reverseLL(head);
	printLL(rev);


#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;

}

/*
 0 1 2 3 4 5 6     7 8   9 10
 w e l c o m e     t o   g e e k s f o r g e e k s welcome to geeksforgeeks

*/
