#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

class Trie{
public:
    Trie* child[26];
    int visited = 0;
    bool isEnd = false;
}

int main(){
    IOS;
    string s = "hello";
    Trie* root = new Trie();

    for(int i = 0; i < s.size(); i++){
        if(root->child[s[i] - 'a'] == NULL){
            root->child[s[i] - 'a'] = new Trie();
        }
        root = root->child[s[i] - 'a'];
        root->visited++;
    }
    root->isEnd = true;
    
    return 0;
}