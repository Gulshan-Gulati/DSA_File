#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;  //min heap;
    pq.push(10);
    pq.push(-20);
    pq.push(120);
    pq.push(3);
    pq.push(100);
    pq.push(20);
    cout << pq.top() << endl;
    pq.pop();
    cout<<pq.top()<<endl;
}