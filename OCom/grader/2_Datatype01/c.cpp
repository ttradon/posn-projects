#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    float a,b,area;
    cin>>a>>b;
    if(0<a<50 && 0<b<50){
        area = (a*b)/2;
        cout<< area;
    }
    return 0;
}