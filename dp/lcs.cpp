#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

int lcsLen(string s1, string s2, vector<vector<int>> &dp){
    int n = s1.size();
    int m = s2.size();
    for(int i = 0;i < n + 1;i++){
        dp[i][0] = 0;
    }

    for(int j = 0;j < m + 1;j++){
        dp[0][j] = 0;
    }

    for(int i = 1;i < n + 1;i++){
        for(int j = 1;j < m + 1;j++){
            if(s1[i - 1] == s2[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}

string lcs(string s1, string s2, vector<vector<int>> &dp){
    int n = s1.size();
    int m = s2.size();
    int lcslen = lcsLen(s1, s2, dp);
    string lcsstr = "";

    int i = n, j = m;
    while(i > 0 && j > 0){
        if(s1[i - 1] == s2[j - 1]){
            lcsstr += s1[i - 1];
            i--;
            j--;
        }else{
            if(dp[i - 1][j] > dp[i][j - 1]){
                i--;
            }else{
                j--;
            }
        }
    }
    reverse(lcsstr.begin(), lcsstr.end());
    return lcsstr;
}

int main(){
    IOS;
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    int lcslen = lcsLen(s1, s2, dp);
    string lcsstr = lcs(s1, s2, dp);
    cout << "Length of LCS: " << lcslen << endl;
    cout << "LCS: " << lcsstr << endl;

    return 0;
}