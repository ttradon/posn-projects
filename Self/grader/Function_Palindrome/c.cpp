#include <iostream>
using namespace std;

bool isPalindrome(int x){ 
    string strn = to_string(x);
    int left=0;
    int right = strn.length()-1;
    while(left<right){
        if(strn[left] != strn[right]) return false;
        left ++;
        right --;
    }
    return true;
}

int main(){
    int x;
    while (true){
        cin >> x;
        if (x == 0){
            cout << "Break" << endl;
            break;
        }
        else{
            if (isPalindrome(x))
                cout << "Palindrome" << endl;
            else
                cout << "Not Palindrome" << endl;
        }
    }
    return 0;
}