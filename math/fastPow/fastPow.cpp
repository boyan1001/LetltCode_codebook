#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

ll fastPow(int x, int n){
    if(n == 0) return 1;
    ll ans = fastPow(x, n/2);
    if(n % 2 == 0) return ans * ans;
    return ans * ans * x;
}

int main(){
    IOS;
    cout << fastPow(2, 10);
}