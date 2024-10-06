#include <bits/stdc++.h>
using namespace std;

int main(){
    string text = "helloasdasdworld";
    string pattern = "world";

    int n = text.length();
    int m = pattern.length();
    int index = -1;

    for(int i=0; i<=n-m; i++){
        int j;
        for(j=0; j<m; j++){
            if(text[i+j] != pattern[j]){
                break;
            }
        }
        if(j == m){
            index = i;
            break;
        }
    }

    if(index != -1){
        cout<< index<< endl;
    }else{
        cout<< "Not Found"<< endl;
    }
    return 0;
}