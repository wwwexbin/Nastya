#include "inc.h"
#include "list.h"

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
			lst.DelEl(2);
			//удаление одного элемента
		}
		default:
			break;
		}
	}
	return 0;
}
