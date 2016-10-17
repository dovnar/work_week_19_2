#include <iostream>
using namespace std;

union Human
{
	int Height;
	float Weight;
};


enum UserType
{
	Height = 1,
	Weight
};

int enterHuman(union Human** human, int** userType);


void main()
{
	Human** human = new Human*[2];
	for (int i = 0; i < 2; i++)
	{
		*human = new Human[2];
	}

	int** userType = new int*[2];
	for (int i = 0; i < 2; i++)
	{
		*userType = new int[2];
	}

	enterHuman(human, userType);
	
	for (int i = 0; i < 2; i++)
	{
		
			cout << "Height = " << human[0][i].Height << endl;
			userType = 2;
		
			cout << "Weight = " << human[0][i].Weight << endl;
			userType = 1;
	
	}


	for (int i = 0; i < 2; i++)
	{
		delete[] human[i];
	}
	delete[] human;
	for (int i = 0; i < 2; i++)
	{
		delete[] userType[i];
	}
	delete[] userType;
}

int enterHuman(union Human** human, int** userType)
{
	UserType userT;
	for (int i = 0; i < 2; i++)
	{
		cout << "Height: 1\nWeight: 2\nenter: ";
		cin >> userType[i][0];
		for (int j = 0; j < 2; j++)
		{
			switch (userType[i][0])
			{
			case Height:
			{
				cout << "enter Height for user " << j + 1 << " : ";
				cin >> human[0][i].Height;
				if (j != 1)
				{
					userType[i][1] = 2;
				}
			}
				break;
			case Weight:
			{
				cout << "enter Weight for user " << j + 1 << " : ";
				cin >> human[0][i].Weight;
				if (j != 1)
				{
					userType[i][1] = 1;
				}
			}
				break;
			default:
				break;
			}
		}
	}
}
