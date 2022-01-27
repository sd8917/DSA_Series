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

//intersection of the linkedlist
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

	node*head1 = NULL;
	node*head2 = NULL;

	insertAtFront(head1, 2);
	insertAtEnd(head1, 1);
	insertAtEnd( head1, 7);
	insertAtEnd(head1, 10);

	node*temp = head1;
	while (temp)
	{
		if (temp->data == 1)
		{

			break;
		}
		temp = temp->next;
	}
	printLL(head1);


	insertAtFront(head2, 5);
	head2->next = temp->next; //making connection between two linked list...

	printLL(head2);

	cout << "intersection of the linked list : " << intersectionPoint(head1, head2) << endl;

#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;

}

/*
 0 1 2 3 4 5 6     7 8   9 10
 w e l c o m e     t o   g e e k s f o r g e e k s welcome to geeksforgeeks

*/
