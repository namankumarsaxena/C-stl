#include<bits/stdc++.h>
using namespace std;
void explainQueue() { //Queue = FIFO (First In, First Out) → elements leave in the order they arrived.
    
    queue<int> q;
    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(4);   // {1, 2, 4}

    q.back() += 5;  // last element (4) becomes 9 → {1, 2, 9}

    cout << q.back();   // prints 9
    cout << q.front();  // prints 1

    q.pop();            // removes front → {2, 9}

    cout << q.front();  // prints 2

    // size(), swap(), empty() work same as in stack
}


int main(){
    explainQueue();
    return 0;
}