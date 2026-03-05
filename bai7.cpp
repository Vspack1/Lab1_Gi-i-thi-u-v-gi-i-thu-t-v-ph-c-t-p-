#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char stack[10000];
    int top = -1;

    bool ok = true;

    for(int i = 0; i < s.length(); i++) {

        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            top++;
            stack[top] = s[i];
        }
        else {
            if(top == -1) {
                ok = false;
                break;
            }

            char c = stack[top];
            top--;

            if((s[i] == ')' && c != '(') ||
               (s[i] == '}' && c != '{') ||
               (s[i] == ']' && c != '[')) {
                ok = false;
                break;
            }
        }
    }

    if(top != -1)
        ok = false;

    if(ok)
        cout << "YES";
    else
        cout << "NO";
}
//O(n)
