#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=0,b=0,c = 0;
    cin>>a>>b>>c;
    int sum = a+b+c;

    if(sum >= 80 ) cout<<"A";
    else if(sum >= 75 ) cout<<"B+";
    else if(sum >= 70 ) cout<<"B";
    else if(sum >= 65 ) cout<<"C+";
    else if(sum >= 60 ) cout<<"C";
    else if(sum >= 55 ) cout<<"D+";
    else if(sum >= 50 ) cout<<"D";
    else cout<<"F";
    return 0;
}