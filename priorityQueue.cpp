#include<bits/stdc++.h>
using namespace std;
void explainPQ() {
    priority_queue<int> pq;   // By default = MAX HEAP

    pq.push(5);   // {5}
    pq.push(2);   // {5, 2}
    pq.push(8);   // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top();  // prints 10 (largest element)

    pq.pop();          // removes 10 -> {8, 5, 2}

    cout << pq.top();  // prints 8 (new largest)
    
    // size(), swap(), empty() work same as stack/queue

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);   // {5}
    pq.push(2);   // {2, 5}
    pq.push(8);   // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top();  // prints 2 (smallest element)

    //push=pop->loq(n)       top->O(1)
}
int main(){
    explainPQ();
    return 0;
}