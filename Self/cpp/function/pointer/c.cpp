#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 12;
    int b = 10;
    int *x = &a;
    a = 15;
    cout<< *x;
    return 0;
}