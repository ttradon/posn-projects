#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;

    if(x1,y1,x2,y2 >= 0 && x1,y1,x2,y2 <= 1000000){
        cout<< abs(x1-x2) + abs(y1-y2);
    }
    return 0;
}