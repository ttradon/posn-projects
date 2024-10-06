#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    char letter;
    int n;
    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    cin>>letter;
    cin>>n;
    for(int i=0; i<=sizeof(letters)/sizeof(letters[0]); i++){
        if(letter == letters[i]){
            int j = i + n;
            if(j > 25){
                j = j%26;
            }
            cout<<letters[j];
        }
    }
    return 0;
}