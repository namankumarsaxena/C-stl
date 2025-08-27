#include<bits/stdc++.h>
using namespace std;

void explainSet() {
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2} (duplicate ignored)
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}

    // begin(), end(), rbegin(), rend(), size(), empty(), swap()
    // work similar to other containers

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // returns iterator pointing to 3

    // if element not found:
    auto it = st.find(6); // returns st.end()

    // erase
    st.erase(5); // removes 5 if present (O(log N))

    int cnt = st.count(1); // returns 1 if 1 exists, else 0


    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);   // erases element at iterator -> O(1)

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);  // erases range [it1, it2)

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}

int main(){

    return 0;
}