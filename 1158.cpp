#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int num; // 원 길이
	int num2; // 배수
	int num3 = 1; // 배수 나머지 구하기
	//string str; // 정답확인
	int arr[100]; // 정답 담기
	int arr_num = 0; // 배열 수 측정
	queue<int> que; // 원 요소 담기
	stack<int> temp; // que.pop 담기

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
