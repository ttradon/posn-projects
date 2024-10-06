#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {0,5,0,5,0,5};
    int target = 5;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(target == arr[i]) cout<< i<< " ";
    }
    return 0;
}