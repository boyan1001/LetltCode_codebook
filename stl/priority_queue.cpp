#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){
    IOS;
    priority_queue<int> pq; // max heap

    // push(): Insert element into the priority queue
    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(2);
    pq.push(4);

    // top(): Access top element
    cout << pq.top() << endl; // 5

    // pop(): Remove top element
    pq.pop();
    cout << pq.top() << endl; // 4

    // size(): Return size
    cout << pq.size() << endl; // 4

    // empty(): Check if the priority queue is empty
    cout << pq.empty() << endl; // 0

    priority_queue<int, vector<int>, greater<int>> pq2; // min heap

    pq2.push(3);
    pq2.push(5);
    pq2.push(1);
    pq2.push(2);
    pq2.push(4);

    cout << pq2.top() << endl; // 1
    return 0;
}