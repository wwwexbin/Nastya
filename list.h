#include "inc.h"

struct element
{
	int x, el;
	element *Next, *Prev;
};

class List
{
	element *Head;
	int size;
public:
	List() :Head(NULL), size(0) {};
	~List();

	void Add(int x);
	void Show();
	void DelAll();
	void AddEl(int x, int el);
	void DelEl(int x);
	void Find(int x);
	int Count() { return size; }
};

List::~List()
{
	while (Head != NULL)
	{
		element *temp = Head->Next;
		delete Head;
		Head = temp;
	}
}

void List::Add(int x)
{
	size++;
	element *temp = new element;
	temp->x = x;
	temp->Next = Head;
	Head = temp;
}

void List::Show()
{
	element *temp = Head;

	while (temp != NULL)
	{
		cout << temp->x << " ";
		temp = temp->Next;
	}
}

void List::DelAll()
{
	size = 0;
	element *temp = Head;

	while (Head)
	{
		element *Next = Head->Next;
		delete Head;
		Head = Next;
	}
}

void List::AddEl(int x, int el)
{
	//////////
}

void List::DelEl(int x)
{
	//////////
}

void List::Find(int x)
{
	element *temp = Head;

	while (temp != NULL)
	{
		if (temp->x == x)
		{
			cout << x << " есть в списке";
		}
		temp = temp->Next;
	}
}
