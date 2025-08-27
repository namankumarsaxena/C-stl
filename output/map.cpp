#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    // insert different ways
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // map with pair as key
    mpp3[{2, 3}] = 10;
    /*
        {[1,2],
        [2,4],
        [3,1]
        }
    */
    //sorted key order


    // Iterating and printing
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl; // prints 2
    cout << mpp[5] << endl; // if key not present → inserts with default 0

    // auto it = mpp3.find(5);
    // cout<<*it.second;

    auto it = mpp.lower_bound(2);

    //auto it = mpp.upper_bound(3);

    //erase ,swap, size, empty ,are same as above

}

int main() {
    explainMap();
    return 0;
}
