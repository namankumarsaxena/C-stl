#include<bits/stdc++.h>
using namespace std;

void explainVector(){  //dynamin arrary
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);


    vector<pair<int , int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(4,5);
    vec.emplace_back(6,7);
    vec.emplace_back(8,9);
    vec.emplace_back(10,11);
    vec.emplace_back(12,13 );


    vector<int> v1(5,100); //{100,100,100,100,100} 5 times 100

    vector<int> v2(5); // 5 instance of garbage value

    vector<int> v4(5,20);
    vector<int> v5(v4);

    //printing vector

    vector<int>::iterator it = v.begin();
    
    it++;
    cout<< *it <<" "<<endl;
    it = it + 2 ;
    cout<< *it <<" "<<endl;

   // vector<int>::iterator it = v.end();
    //vector<int>::iterator it = v.rend();
    //vector<int>::iterator it = v.rbegin();
    
    cout <<v[0] << " " <<v.at(0)<<endl;

    cout << v.back() << " "<<endl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it : v){
        cout<< it <<" ";
    }
    cout<<endl;
    for (vector<pair<int,int>>::iterator it = vec.begin(); it != vec.end(); it++) {
    cout << it->first << " " << it->second << endl;
    }

    //erase 
    //{10,20,12,23}
    v.erase(v.begin()+1);

    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);//{10,20,35}[start.end)

    //Insert
    // vector<int>v(2,100);//{100,100}
    // v.insert(v.begin(),300);//{300,100,100}
    // v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

    // vector<int> copy(2,50);//{50,50}
    // v.insert(v.begin(),copy.begin(),copy.end());

    cout<< v.size();

    //{10,20}
    v.pop_back();//{10}

    //v1 -> {10,20}
    //v2 -> {30,40}
    v1.swap(v2);

    // v.clear()

    cout<<v.empty();

}

int main(){
    explainVector();
    return 0;
}
