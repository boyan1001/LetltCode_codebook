#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

static int segment_tree[10000] = {0};

void build(int l, int r, int pos, int arr[]){
    if(l == r){
        segment_tree[pos] = arr[l];
        return;
    }
    int mid = (l + r) / 2;
    build(l, mid, 2 * pos + 1, arr);
    build(mid + 1, r, 2 * pos + 2, arr);
    segment_tree[pos] = segment_tree[2 * pos + 1] + segment_tree[2 * pos + 2];
}

void modify(int l, int r, int pos, int idx, int val){
    if(l == r){
        segment_tree[pos] = val;
        return;
    }
    int mid = (l + r) / 2;
    if(idx <= mid){
        modify(l, mid, 2 * pos + 1, idx, val);
    }else{
        modify(mid + 1, r, 2 * pos + 2, idx, val);
    }
    segment_tree[pos] = segment_tree[2 * pos + 1] + segment_tree[2 * pos + 2];
}

int main(){
    IOS;
    return 0;
}