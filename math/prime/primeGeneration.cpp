#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

int main(){
    IOS;
    vector<bool> isPrime(1000001, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for(int i = 2;i < 1000001;i++){
        if(isPrime[i]){
            for(int j = i * 2;j < 1000001;j += i){
                isPrime[j] = false;
            }
        }
    }
    return 0;
}