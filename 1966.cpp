#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int num; // while�� Ƚ��
	int que_len; // que�� ����
	int count; // �켱����
	int que_num = 0; // que ���
	cin >> num;
	while (num > 0)
	{
		priority_queue<int> que; // �켱���� queue
		int count_que = 0; // �켱���� ����
		int temp = 0; // �켱������ �ִ� que ���
		int print = 1; // ��� ����
		cin >> que_len >> count;
		for (int i = 0; i < que_len; i++)
		{
			cin >> que_num;
			que.push(que_num);
			if (count == count_que)
				temp = que_num;
			count_que++;
		}
		while (!que.empty())
		{
			if (que.top() == temp)
			{
				cout << print << endl;
				break;
			}
			que.pop();
			print++;
		}
		num--;
	}
	return 0;
}