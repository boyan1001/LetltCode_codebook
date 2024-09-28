#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

int main(){
    IOS;
    
    vector<int> a = {10, 22 ,9, 33, 21, 50, 41, 60, 80};

    int n = a.size();
    vector<int> dp(n, 1); // dp[i]: 以a[i]為結尾的LIS的長度
    vector<int> v;        // v[i]: 紀錄可位居第 i 順位的最小值
    v.pb(a[0]);
    int lislen = 1;       // 紀錄LIS的長度

    // 計算dp[i], 求出LIS的長度
    for(int i = 1;i < n;i++){
        if(a[i] > v.back()){ // a[i] > v.back()，則a[i]可位居LIS的最後一位
            v.pb(a[i]);
            dp[i] = v.size();
            lislen = max(lislen, dp[i]);
        }else{
            auto it = lower_bound(v.begin(), v.end(), a[i]); // 找到第一個大於等於a[i]的位址
            *it = a[i]; // v[it] = a[i]
            dp[i] = it - v.begin() + 1; // it - v.begin() + 1: a[i]可位居第幾位
        }
    }

    cout << "LIS length: " << lislen << endl;

    // 求出LIS
    vector<int> lis;
    for(int i = n - 1;i >= 0;i--){
        if(dp[i] == lislen){
            lis.pb(a[i]);
            lislen--;
        }
    }

    reverse(lis.begin(), lis.end());
    cout << "LIS: ";
    for(int i = 0;i < lis.size();i++){
        cout << lis[i] << " ";
    }
    cout << endl;
    return 0;
}