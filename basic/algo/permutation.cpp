#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){
    IOS;
    vector<int> arr = {1, 2, 3, 4, 5};

    // is_permutation(): 判斷陣列 b 是否為陣列 arr 排序後的結果
    vector<int> b1 = {1, 5, 4, 3, 2};
    vector<int> b2 = {1, 2, 3, 4, 6};
    cout << is_permutation(arr.begin(), arr.end(), b1.begin()) << endl; // 1
    cout << is_permutation(arr.begin(), arr.end(), b2.begin()) << endl; // 0

    // next_permutation(): 依序列出 arr 的所有排列
    do{
        for(int num: arr){
            cout << num << " ";
        }
        cout << endl;
    }while(next_permutation(arr.begin(), arr.end()));
    cout << "----------------" << endl;

    // prev_permutation(): 逆向排序列出 arr 的所有排列
    arr = {5, 4, 3, 2, 1};
    do{
        for(int num: arr){
            cout << num << " ";
        }
        cout << endl;
    }while(prev_permutation(arr.begin(), arr.end()));
    return 0;
}