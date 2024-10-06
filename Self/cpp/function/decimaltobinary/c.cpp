#include <bits/stdc++.h>
using namespace std;

void DecToBinary(int n){
    int arr[32];
    int i=0;
    while(n>0){
        arr[i] = n%2;
        n/=2;
        i++;
    }
    int terminal = i;
    for(int i = terminal-1; i>=0; i--){
        cout<< arr[i];
    }

}

int main(){
    int num;
    cin>>num;
    DecToBinary(num);
    return 0;
}