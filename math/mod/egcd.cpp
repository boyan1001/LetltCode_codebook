#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

int egcd(int a, int b, int &x, int &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1; // 用於儲存遞迴的結果
    int gcd = egcd(b, a % b, x1, y1); // 遞迴計算

    // 更新 x 和 y 的值
    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

int main(){
    IOS;

    int a, b, x, y;
    cin >> a >> b;

    int gcd = egcd(a, b, x, y);

    cout << "GCD: " << gcd << endl;
    cout << "x: " << x << ", y: " << y << endl;
    cout << "Equation: " << a << "*" << x << " + " << b << "*" << y << " = " << gcd << endl;

    return 0;
}