#include<iostream>
#include<Windows.h>
using namespace std;
struct Phonebook
{
	char Surname[20];
	char Address[30];
	int HouseNumber;
	int PhoneNumber;
};
void fillPhoneBook(Phonebook a[])
{
	for (int i = 0; i < 2; i++)
	{
		cout << "������� �" << i + 1 << ": ������ �������: ";
		cin >> a[i].Surname;
		cout << "������� �" << i + 1 << ": ������ ����� ������: ";
		cin >> a[i].Address;
		cout << "������� �" << i + 1 << ": ������ ����� �������: ";
		cin >> a[i].HouseNumber;
		cout << "������� �" << i + 1 << ": ������ ����� ��������: ";
		cin >> a[i].PhoneNumber;
	}
}
void PhoneBookSearch(Phonebook a[], string surname, string address, int housenum)
{
	size_t x = 0;
	for (size_t i = 0; i < 2; i++)
	{
		if (surname == a[i].Surname && address == a[i].Address && housenum == a[i].HouseNumber)
		{
			cout << "����� �������� ��������, ����� �� ������ - " << a[i].PhoneNumber << endl;
			x++;
		}
	}
	if (x == 0)
		cout << "�������� � ������ �������� �� ������� ���� � ��������� ����!" << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int arraySize = 2;
	string surn, addr;
	int num;
	Phonebook phoneBookArray[arraySize];
	fillPhoneBook(phoneBookArray);
	cout << "����� ������� �������� ��������:";
	cin >> surn;
	cout << "����� ������, �� ��� ������� ������� �������:";
	cin >> addr;
	cout << "����� ����� ������� �������� ��������:";
	cin >> num;
	PhoneBookSearch(phoneBookArray, surn, addr, num);
	system("pause");
	return 0;
}