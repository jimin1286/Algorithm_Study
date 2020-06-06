#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int num;
	int push_num;
	int stack_num = 1;
	bool check = true;
	string temp;
	stack<int> st;
	cin >> num;
	while (num > 0)
	{
		cin >> push_num;
		if (push_num >= st.size())
		{
			if (st.size() == 0) // 초기 설정
			{
				st.push(stack_num);
				cout << "+" << "\n";
				stack_num++;
			}
			while (push_num > st.top()) // push
			{
				cout << stack_num << endl;
				st.push(stack_num);
				cout << "+" << "\n";
				stack_num++;
			}
			if (st.top() != push_num)
				check = false;
			temp += to_string(st.top()); //temp에 pop한거 합치기
			st.pop();
			cout << "-" << "\n";
		}
		else
		{
			while (push_num < st.top()) //pop
			{
				st.pop();
				cout << "-" << "\n";
			}
			if (st.top() != push_num)
				check = false;
			temp += to_string(st.top());
		}
		cout << temp << endl;
		num--;
	}
	if (check != true)
		cout << "NO" << "\n";
	return 0;
}