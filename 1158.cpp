#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int num; // �� ����
	int num2; // ���
	int num3 = 1; // ��� ������ ���ϱ�
	//string str; // ����Ȯ��
	int arr[100]; // ���� ���
	int arr_num = 0; // �迭 �� ����
	queue<int> que; // �� ��� ���
	stack<int> temp; // que.pop ���

	cin >> num >> num2;
	for (int i = 1; i <= num; i++)
		que.push(i);
	num = que.size();
	while (!que.empty())
	{
		temp.push(que.front());
		if (num3 % num2 == 0)
		{
			arr[arr_num] = temp.top();
			arr_num++;
			//str += to_string(temp.top());
		}
		else
			que.push(que.front());
		que.pop();
		num3++;
		if (num == temp.size())
		{
			for (int i = 0; i < temp.size(); i++)
				temp.pop();
		}
	}
	cout << "<";
	for (int j = 0; j < arr_num; j++)
	{
		cout << arr[j];
		if (j != arr_num - 1)
			cout << ",";
	}
	cout << ">";
	return 0;
}
