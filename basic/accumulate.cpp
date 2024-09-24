#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){
    IOS;

    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    // accumulate(): accumulate the elements in the range [first, last) using init as the initial value
    int sum = accumulate(arr.begin(), arr.begin() + 4, 0);
    cout << "Sum of the first 4 elements: " << sum << endl;
    return 0;
}