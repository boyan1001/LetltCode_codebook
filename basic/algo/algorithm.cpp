#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){
    IOS;
    vector<int> arr = {38, 27, 43, 43, 3, 9, 82, 10};
    int a = 1, b = 2;

    // swap(): swap a and b
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // min_element(): find the minimum element in the range [first, last)
    cout << "Minimum element in the array: " << *min_element(arr.begin(), arr.end()) << endl;

    // max_element(): find the maximum element in the range [first, last)
    cout << "Maximum element in the array: " << *max_element(arr.begin(), arr.end()) << endl;

    // nth_element(): rearrange the elements in the range [first, last) 
    // so that the n-th element is the element that would be in that position in a sorted sequence
    // The other elements are left without any specific order, 
    // except that none of the elements preceding nth are greater than it, 
    // and none of the elements following it are less
    nth_element(arr.begin(), arr.begin() + 3, arr.end());
    cout << "The 4th smallest element in the array: " << arr[3] << endl;

    // unique(): 把相鄰一樣的數字過濾到只剩一個
    cout << "Before unique: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;
    
    unique(arr.begin(), arr.end());

    cout << "After unique: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    // reverse(): reverse the order of the elements in the range [first, last)
    cout << "Before reverse: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    reverse(arr.begin(), arr.end());

    cout << "After reverse: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}