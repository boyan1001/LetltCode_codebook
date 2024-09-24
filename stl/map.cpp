#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){
    IOS;

    map<string, int> mp;

    // insert(): Insert element into the map
    mp.insert({"apple", 3});
    mp.insert({"banana", 5});
    mp["cherry"] = 7; // 預設是 0, 這裡將 0 改成 7

    // operator[]: Access element
    cout << mp["apple"] << endl; // 3

    // find(): Find element
    if(mp.find("apple") != mp.end()){
        cout << "Found" << endl;
    }else{
        cout << "Not found" << endl;
    }

    // or
    if(mp.count("apple")){
        cout << "Found" << endl;
    }else{
        cout << "Not found" << endl;
    }

    // erase(): Remove element
    mp.erase("apple");

    // size(): Return size
    cout << mp.size() << endl; // 2

    // empty(): Check if the map is empty
    cout << mp.empty() << endl; // 0

    // clear(): Clear the map
    mp.clear();
    cout << mp.size() << endl; // 0
    
    return 0;
}