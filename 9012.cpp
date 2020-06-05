#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
	int num;
	char vps[100];
	cin >> num;
	while (num > 0)
	{
		cin >> vps;
		int length = strlen(vps);
		int arr_num = 0;
		int arr_num2 = 0;
		stack<char> temp;
		int i = 0; // ( °¹¼ö
		int j = 0; // ) °¹¼ö
		bool check = true;
		bool check2 = true;
		while (length != arr_num)
		{
			if (vps[arr_num] == '(')
				temp.push(vps[arr_num]);
			else
			{
				if (!temp.empty())
					temp.pop();
				else
					check = false;
			}
			arr_num++;
		}
		check2 = temp.empty();
		if (check == true && check2 == true)
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
		num--;
	}
	return 0;
}