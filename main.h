#include "inc.h"
#include "list.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int N,
		x;
	List lst;

	cout << "������� ���-�� ��������� � �����: ";
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cout << "������� � �������� " << i + 1 << " = ";
		cin >> x;
		lst.Add(x);
	}

	while (true)
	{
		system("cls");
		cout << "����" << endl;
		cout << "1.��� �������� ��������� � ��������" << endl;
		cout << "2.�������� � ������ ��� ���� ����" << endl;
		cout << "3.�������� ������� �������� �� ��������" << endl;
		cout << "4.������ ���� ������� � ��������" << endl;

		char switch_on = _getch();
		switch (switch_on)
		{
		case '1':
		{
			lst.DelAll();
			cout << "������ ��� ���� ��������� �������" << endl;
			_getch();
			exit(1);
		}
		case '2':
		{
			//���������� �������� 
		}
		case '3':
		{
			cout << "������� ����� ��������: ";
			cin >> x;
			lst.Find(x);
			_getch();
		}
		case '4':
		{
			lst.DelEl(2);
			//�������� ������ ��������
		}
		default:
			break;
		}
	}
	return 0;
}
