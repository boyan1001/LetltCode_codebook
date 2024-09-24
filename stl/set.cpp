#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){
    IOS;

    set<int> s;

    // insert(): Insert element into the set
    s.insert(3);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(4);

    // find(): Find element in the set
    if(s.find(3) != s.end()){
        cout << "Found" << endl;
    }else{
        cout << "Not found" << endl;
    }

    // or
    if(s.count(3)){
        cout << "Found" << endl;
    }else{
        cout << "Not found" << endl;
    }

    // erase(): Remove element from the set
    s.erase(3);

    // size(): Return size
    cout << s.size() << endl; // 4

    // empty(): Check if the set is empty
    cout << s.empty() << endl; // 0

    // clear(): Clear the set
    s.clear();
    cout << s.size() << endl; // 0
    return 0;
}