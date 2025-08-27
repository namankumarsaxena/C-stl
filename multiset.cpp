#include <bits/stdc++.h>
using namespace std;

void explainMultiSet() {
    // Everything is same as set
    // Only stores duplicate elements also
    multiset<int> ms;

    ms.insert(1);  // {1}
    ms.insert(1);  // {1, 1}
    ms.insert(1);  // {1, 1, 1}

    // Erase all 1's
    ms.erase(1);   // {}

    // Count number of 1's
    int cnt = ms.count(1);
    cout << "Count of 1 = " << cnt << endl;

    // Insert again for demonstration
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);  // {1, 1, 1}

    // Only a single one erased
    ms.erase(ms.find(1));   // {1, 1}

    // Erase a range (first two 1s)
    ms.erase(ms.find(1), next(ms.find(1) ,2)); // {}

    // Print remaining elements
    cout << "Elements left: ";
    for (int x : ms) cout << x << " ";
    cout << endl;

    // Rest all functions same as set
}

int main() {
    explainMultiSet();
    return 0;
}
