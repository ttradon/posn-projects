#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int s;
    double a;
    double b;
    cin>>s;
    cin>>a;
    cin>>b;
    if(s == 1){
        cout<< sqrt(a+b);
    }
    else if(s == 2){
        cout<<(ceil(a+b));
    }
    else if(s == 3){
        cout<<(floor(a+b));
    }
    else if(s == 4){
        cout<<(pow(a,b));
    }
    else if(s == 5){
        cout<<((a+b)-(a-b));
    }
    return 0;
}