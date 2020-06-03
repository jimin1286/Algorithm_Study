#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int arr[1000];
	int push_num = 0;
	int length = 0;
	int front = 0;
	string menu;
	cin >> num;
	while (num>0)
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
			if (length > front)
			{
				cout << arr[front] << endl;
				front++;
			}
			else
				cout << -1 << endl;
		}
		else if (menu == "size")
			cout << length - front << endl;
		else if (menu == "empty")
		{
			if (length - front != 0)
				cout << 0 << endl;
			else
				cout << 1 << endl;
		}
		else if (menu == "front")
		{
			if (length - front == 0)
				cout << -1 << endl;
			else 
				cout << arr[front] << endl;
		}
		else if (menu == "back")
		{
			if (length - front == 0)
				cout << -1 << endl;
			else
				cout << arr[length - 1] << endl;
		}
		num--;
	}
	return 0;
}