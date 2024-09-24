#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

void merge(vector<int>& arr, int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // create two temporary arrays
    vector<int> larr(n1);
    vector<int> rarr(n2);

    // copy the data to the temporary arrays
    for(int i = 0;i < n1;i++){
        larr[i] = arr[l + i];
    }
    for(int i = 0;i < n2;i++){
        rarr[i] = arr[mid + 1 + i];
    }

    // merge the two temporary arrays to original array
    int li = 0, ri = 0, i = l;
    while(li < n1 && ri < n2){
        if(larr[li] <= rarr[ri]){
            arr[i] = larr[li];
            li++;
        }else{
            arr[i] = rarr[ri];
            ri++;
        }
        i++;
    }

    // remaining elements
    while(li < n1){
        arr[i] = larr[li];
        li++;
        i++;
    }
    while(ri < n2){
        arr[i] = rarr[ri];
        ri++;
        i++;
    }
    return;
}

void mergeSort(vector<int> &arr, int l, int r){
    if(l < r){
        // Divide the array into two halves
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        // merge the two halves
        merge(arr, l, mid, r);
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

    // 執行 Merge Sort
    mergeSort(arr, 0, arr.size() - 1);

    cout << "排序後的數列: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}