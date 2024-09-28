#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

typedef struct _matrix{
    ll c00, c10, c01, c11;   
} matrix;

matrix multiply(matrix a, matrix b){
    matrix ans;
    ans.c00 = (a.c00 * b.c00 + a.c01 * b.c10);
    ans.c10 = (a.c10 * b.c00 + a.c11 * b.c10);
    ans.c01 = (a.c00 * b.c01 + a.c01 * b.c11);
    ans.c11 = (a.c10 * b.c01 + a.c11 * b.c11);
    return ans;
}

matrix matrixFastPow(matrix x, int n){
    matrix ans = {1, 0, 0, 1};
    if(n == 0) return ans;
    ans = matrixFastPow(x, n/2);
    if(n % 2 == 0) return multiply(ans, ans);
    return multiply(multiply(ans, ans), x);
}

int main(){
    IOS;
    matrix x = {1, 1, 1, 0};
    matrix ans = matrixFastPow(x, 5);
    cout << ans.c00 << "    " << ans.c01 << endl;
    cout << ans.c10 << "    " << ans.c11 << endl;
    return 0;
}