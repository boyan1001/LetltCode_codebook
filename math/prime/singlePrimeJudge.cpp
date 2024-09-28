#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

bool prime(int n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(!(n%2) || !(n%3)) return false;
    for(int i=5;i*i<=n;i+=6)
        if(!(n%i) || !(n%(i+2))) return false;
    
    return true;
}

int main(){
    IOS;
    int n;
    cin >> n;
    cout << prime(n) << endl;
    return 0;
}