#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int age;
    string day,vip;
    cin>>age>>vip>>day;

    double price = 200;


    if(age < 12 || age >= 60) price -= 50*200/100;
    else if(age <= 59 && vip == "Y") price -= 20*200/100;
    
    if(day == "Wednesday") price -= 10*200/100;

    cout<<price<<" baht";
    
    return 0;
}