#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> vote;
    string name;
    for(int i=0; i<6; i++){
        cin>>name;
        vote[name]++;
    }
    for(auto items: vote){
        cout<< items.first<< " "<< items.second;
        cout<<endl;
    }
    return 0;
}