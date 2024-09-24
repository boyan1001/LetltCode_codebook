#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

int main(){
    IOS;

    // Initialization
    string s = "Hello, World!";
    cout << s << endl; // Hello, World!

    // size(): Return size
    cout << s.size() << endl; // 13

    // empty(): Check if the string is empty
    cout << s.empty() << endl; // 0

    // clear(): Clear the string
    s.clear();

    // append(): Append string
    s.append(" What's up?");

    // iterator
    for(char &c: s){
        cout << c;
    }

    // find(): Find substring
    // find the first 'o' in the string
    cout << s.find("o") << endl; // 4

    // substr(): Get substring
    cout << s.substr(4, 2) << endl; // 'o,'
    cout << s.substr(0, s.find(" ")) << endl; // Hello,

    // insert(): Insert string
    s.insert(0, "Hey, ");

    // erase(): Erase string
    s.erase(0, 5);

    // compare(): Compare string
    string s1 = "apple";
    string s2 = "banana";
    string s3 = "apple";
    cout << s1.compare(s2) << endl; // != 0
    cout << s1.compare(s3) << endl; // 0

    // to_string(): Convert number to string
    int x = 123;
    string s4 = to_string(x);
    cout << s4 << endl; // 123

    int y1 = stoi("123"); // 123
    double y2 = stod("123.45"); // 123.45
    ll y3 = stoll("1234567890"); // 1234567890

    // >, <, >=, <=, ==, !=
    // use lexicographical order
    cout << (s1 > s2) << endl; // 0
    cout << (s1 < s2) << endl; // 1
    
    return 0;
}