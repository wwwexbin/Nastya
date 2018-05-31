#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;

struct element
{
	int x, el;
	element *Next;
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
	////////////
}

void List::DelEl(int x)
{
	////////////
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

int main()
{
	setlocale(LC_ALL, "Russian");
	int N,
		x;
	List lst;

	cout << "Введите кол-во автобусов в рейсе: ";
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cout << "Введите № автобуса " << i + 1 << " = ";
		cin >> x;
		lst.Add(x);
	}

	while (true)
	{
		system("cls");
		cout << "МЕНЮ" << endl;
		cout << "1.Все автобусы вернулись с маршрута" << endl;
		cout << "2.Включить в список еще один рейс" << endl;
		cout << "3.Проверка наличия автобуса на маршруте" << endl;
		cout << "4.Убрать один автобус с маршрута" << endl;

		char switch_on = _getch();
		switch (switch_on)
		{
		case '1':
		{
			lst.DelAll();
			cout << "Данный обо всех автобусах удалены" << endl;
			_getch();
			exit(1);
		}
		case '2':
		{
			//добавление элемента 
		}
		case '3':
		{
			cout << "Введите номер автобуса: ";
			cin >> x;
			lst.Find(x);
			_getch();
		}
		case '4':
		{
			//удаление одного элемента
		}
		default:
			break;
		}
	}
    return 0;
}
