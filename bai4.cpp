#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int left = 0;
    int right = s.length() - 1;

    bool check = true;

    while(left < right) {
        if(s[left] != s[right]) {
            check = false;
            break;
        }
        left++;
        right--;
    }

    if(check)
        cout << "YES";
    else
        cout << "NO";
}
//O(n)
