#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int num; // while문 횟수
	int que_len; // que의 길이
	int count; // 우선순위
	int que_num = 0; // que 요소
	cin >> num;
	while (num > 0)
	{
		priority_queue<int> que; // 우선순위 queue
		int count_que = 0; // 우선순위 측정
		int temp = 0; // 우선순위에 있는 que 요소
		int print = 1; // 출력 순서
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