#include <iostream>

using namespace std;

int main()
{
	string menu;
	char arr[100];
	int num;
	int point = 0;
	cin >> arr >> num;
	for (; point < 100; point++)
	{
		if (arr[point] == NULL)
			break;
	}
	int length = point;
	cout << arr << endl;
	while (num > 0)
	{
		cin >> menu;

		if (menu == "L")
		{
			if (point != 0)
				point--;
		}
		else if (menu == "D")
		{
			if (point == length)
				break;
			else
			{
				while (true)
				{
					point++;
					if (arr[point] != NULL)
						break;
				}
			}
		}
		else if (menu == "B")
		{
			if (point != 0)
			{
				arr[point - 1] = NULL;
				point--;
			}
		}
		else if (menu == "P")
		{
			char put;
			char temp[100];
			cin >> put;
			for (int i = 0; i < length + 1; i++)
			{
				if (i <= point - 1)
					temp[i] = arr[i];
				else if (i >= point + 1)
					temp[i] = arr[i - 1];
				else
					temp[i] = put;
			}
			for (int i = 0; i <= length; i++)
				arr[i] = temp[i];
			point++;
			length++;
		}
		num--;
		for (int i = 0; i <= length; i++)
		{
			if (arr[i] != NULL)
				cout << arr[i];
		}
		cout << "\n";
	}
	for (int i = 0; i <= length; i++)
	{
		if (arr[i] != NULL)
			cout << arr[i];
	}
	cout << "\n";
	return 0;
}