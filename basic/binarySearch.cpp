#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){
    IOS;
    vector<int> arr = {1, 5, 3, 4, 2, 6, 7, 9, 8, 10};

    // 要先排序
    sort(arr.begin(), arr.end());

    // Binary search
    // lower_bound(): 找出vector中「大於或等於」val的「最小值」的位置
    int pos1 = *lower_bound(arr.begin(), arr.end(), 5);

    // upper_bound(): 找出vector中「大於」val的「最小值」的位置
    int pos2 = *upper_bound(arr.begin(), arr.end(), 5);

    // 找出vector中「小於」val的「最小值」的位置
    int pos3 = *(lower_bound(arr.begin(), arr.end(), 5) - 1);

    // 找出vector中「小於或等於」val的「最小值」的位置
    int pos4 = *(upper_bound(arr.begin(), arr.end(), 5) - 1);

    cout << pos1 << endl;
    cout << pos2 << endl;
    cout << pos3 << endl;
    cout << pos4 << endl;
    return 0;
}