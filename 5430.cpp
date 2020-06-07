#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int num;
    int count;
    int arr[1000];
    int arr_num = 0;
    bool check = true;
    queue<int> que;
    queue<int> copy;
    queue<int> copy_temp;
    priority_queue<int, vector<int>, greater<int>> low_que;
    cin >> num >> count;
    for (int i = 0; i < num; i++)
    {
        int push;
        cin >> push;
        que.push(push);
        copy.push(push);
        low_que.push(push);
    }
    int qq =1;
    while (50 >qq)
    {
        if (check == true)
        {
            while (!copy.empty())
            {
                bool overlap = false;
                for (int i = 0; i < arr_num; i++)
                {
                    if (arr[i] == copy.front() * que.front())
                        overlap = true;
                }
                if (overlap == false)
                {
                    arr[arr_num] = copy.front() * que.front();
                    arr_num++;
                    low_que.push(copy.front() * que.front());
                }
                copy_temp.push(copy.front());
                copy.pop();
            }
            check = false;
        }
        else
        {
            while (!copy_temp.empty())
            {
                bool overlap = false;
                for (int i = 0; i <= arr_num; i++)
                {
                    if (arr[i] == copy_temp.front() * que.front())
                        overlap = true;
                }
                if (overlap == false)
                {
                    arr[arr_num] = copy_temp.front() * que.front();
                    arr_num++;
                    low_que.push(copy_temp.front() * que.front());
                }
                copy.push(copy_temp.front());
                copy_temp.pop();
            }
            check = true;
        }
        que.pop();
        if (que.empty() == true)
        {
            while (!copy.empty())
                copy.pop();
            for (int i = 0; i < arr_num; i++)
            {
                que.push(arr[i]);
                copy.push(arr[i]);
            }
        }
        qq++;
    }
    int asd = 0;
    while (!low_que.empty())
    {
        int a = low_que.top();
        cout << a << endl;
        asd++;
        low_que.pop();
    }

    return 0;
}