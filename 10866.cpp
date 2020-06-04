#include <iostream>
using namespace std;

int main()
{
	int num;
	int push_num;
	int arr[100];
	int length = 0;
	string menu;

	cin >> num;
	while (num > 0)
	{
		cin >> menu;
		if (menu == "push_front")
		{
			int temp[100];
			cin >> push_num;
			temp[0] = push_num;
			length++;
			for (int i = 0; i <= length; i++)
			{
				temp[i+1] = arr[i];
			}
			for (int i = 0; i <= length; i++)
			{
				arr[i] = temp[i];
			}
		}
		else if (menu == "push_back")
		{
			cin >> push_num;
			arr[length] = push_num;
			length++;
		}
		else if (menu == "pop_front")
		{
			int temp[100];
			if (length != 0)
			{
				cout << arr[0] << endl;
				for (int i = 0; i <= length; i++)
				{
					temp[i] = arr[i + 1];
				}
				for (int i = 0; i <= length; i++)
				{
					arr[i] = temp[i];
				}
				length--;
			}
			else
				cout << -1 << "\n";
		}
		else if (menu == "pop_back")
		{
			if (length != 0)
			{
				cout << arr[length - 1] << "\n";
				length--;
			}
			else
				cout << -1 << "\n";

		}
		else if (menu == "size")
			cout << length << endl;
		else if (menu == "empty")
		{
			if (length == 0)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (menu == "front")
		{
			if (length != 0)
			{
				cout << arr[0] << "\n";
			}
			else
				cout << -1 << "\n";
		}
		else if (menu == "back")
		{
			if (length != 0)
			{
				cout << arr[length - 1] << "\n";
			}
			else
				cout << -1 << "\n";

		}
		num--;
	}
	return 0;
}