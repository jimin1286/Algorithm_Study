#include <iostream>

using namespace std;

int main()
{
	int num;
	int arr[1000];
	int push_num;
	int length = 0;
	string menu;
	cin >> num;
	while (num > 0)
	{
		cin >> menu;
		if (menu == "push")
		{
			cin >> push_num;
			arr[length] = push_num;
			length++;
		}
		else if (menu == "pop")
		{
			if (length != 0)
			{
				cout << arr[length - 1] << endl;
				length--;
			}
			else
				cout << -1 << endl;
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
		else if (menu == "top")
		{
			if (length == 0)
				cout << -1 << endl;
			else
				cout << arr[length - 1] << endl;
		}
		num--;
	}
	return 0;
}