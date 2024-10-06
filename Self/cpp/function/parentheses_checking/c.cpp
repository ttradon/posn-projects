#include <bits/stdc++.h>
using namespace std;

bool isValidParentheses(string s) {
    stack<char> str;

    for (char c : s) {
        if (c == '(') {
            str.push(c);
        } else if (c == ')') {
            if (str.empty()) {
                return false; // เจอวงเล็บปิดก่อนเปิด
            }
            str.pop(); // จับคู่วงเล็บ
        }
    }

    return str.empty(); // ถ้าสแต็กว่าง แสดงว่าทุกวงเล็บจับคู่กันหมด
}

int main() {
    string input;
    cin>>input;
    
    if (isValidParentheses(input)){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    return 0;
}