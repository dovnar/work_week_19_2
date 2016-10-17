#include <iostream>
using namespace std;

void addDataItem(struct DataItem* cur);
void printDataItem(struct DataItem* dataItem);
struct DataItem
{
	char* Date;
	int Temperature;
	struct DataItem* AddData;
};

void main()
{
	DataItem data;
	DataItem* dataItem = new DataItem[1];
	DataItem* cur = dataItem;
	int menu = 0;
	do
	{
		cout << "add data = 1;\tprint data = 2\exit = 0\tenter: ";
		cin >> menu;
		fflush(stdin);
		menu == 1 ? addDataItem(cur) : (menu == 2 ? printDataItem(dataItem) : 0);
	} while (menu != 0);
}

void addDataItem(struct DataItem* cur)
{
	cout << "enter date: dd.mm.yyyy: ";
	cur->Date = new char[11];
	
	cin.getline(cur->Date, 11);fflush(stdin);
	cout << "enter Temperature: ";
	
	cin >> cur->Temperature;fflush(stdin);
	cur = (cur->AddData = new DataItem[1]);
	cur->AddData = nullptr;
}

void printDataItem(struct DataItem* dataItem)
{
	DataItem* cur = dataItem;
	cout << "date\t\t" << "Temperature:" << endl;
	for (cur; cur != nullptr && cur->AddData != nullptr; cur = cur->AddData)
	{
		cout << cur->Date << "\t" << cur->Temperature << endl;
	}
}