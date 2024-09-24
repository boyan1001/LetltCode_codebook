#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

void selectionSort(vector<int>& arr, int n){
    for(int i = 0;i < n;i++){
        swap(arr[i], *min_element(arr.begin() + i, arr.end()));
    }
    return;
}

int main(){
    IOS;
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "原始數列: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    // 執行 Selection Sort
    selectionSort(arr, arr.size());

    cout << "排序後的數列: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}