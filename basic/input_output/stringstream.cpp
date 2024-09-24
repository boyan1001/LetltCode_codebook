#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){
    IOS;

    vector<string> words = {"Hello", "World", "from", "C++"};
    string s;
    for(auto &wd: words){
        s += wd + " ";
    }

    stringstream ss(s); // 將 string s 轉換成 stringstream ss
    string word;

    // 透過 stringstream 來讀取 string s 中的每個單字
    while(ss >> word){
        cout << word << endl;
    }
    
    return 0;
}