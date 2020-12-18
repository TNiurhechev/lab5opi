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
		cout << "Абонент №" << i + 1 << ": Введіть прізвище: ";
		cin >> a[i].Surname;
		cout << "Абонент №" << i + 1 << ": Введіть назву вулиці: ";
		cin >> a[i].Address;
		cout << "Абонент №" << i + 1 << ": Введіть номер будинку: ";
		cin >> a[i].HouseNumber;
		cout << "Абонент №" << i + 1 << ": Введіть номер телефона: ";
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
			cout << "Номер телефону абонента, якого ви шукаєте - " << a[i].PhoneNumber << endl;
			x++;
		}
	}
	if (x == 0)
		cout << "Абонента з такими прізвищем та адресою немає у телефонній книзі!" << endl;
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
	cout << "Ведіть прізвище шуканого абонента:";
	cin >> surn;
	cout << "Ведіть вулицю, на якій проживає шуканий абонент:";
	cin >> addr;
	cout << "Ведіть номер будинку шуканого абонента:";
	cin >> num;
	PhoneBookSearch(phoneBookArray, surn, addr, num);
	system("pause");
	return 0;
}