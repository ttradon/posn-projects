#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin>>str;
    int arr[15] = {0};
    for(int i=0; i<str.length(); i++){
        arr[i] = 1;
    }
    //1
    for(int i=0; i<str.length(); i++){
        if(i==0){
            cout<<"..#..";
        }
        else if((i+1) %3 != 0){
            cout<<".#..";
        }
        else{
            cout<<".*..";
        } 
    }
    //2
    cout<<endl;
    for(int i=0; i<str.length(); i++){
        if(i==0){
            cout<<".#.#.";
        }
        else if((i+1) %3 != 0){
            cout<<"#.#.";
        }
        else{
            cout<<"*.*.";
        }
    }
    //3
    cout<<endl;
    for(int i=0; i<str.length(); i++){
        if(i==0){
            cout<<"#."<<str[i]<<".#";
        }
        else if((i+1) %3 != 0 && i == str.length()-1 || (i+1) %3 != 0 && (i+2) %3 != 0){
            cout<<"."<<str[i]<<".#";
        }
        else if((i+1) %3 != 0){
            cout<<"."<<str[i]<<".";
        }  
        else{
            cout<<"*."<<str[i]<<".*";
        }
    }
    //4
    cout<<endl;
    for(int i=0; i<str.length(); i++){
        if(i==0){
            cout<<".#.#.";
        }
        else if((i+1) %3 != 0){
            cout<<"#.#.";
        }
        else{
            cout<<"*.*.";
        }
    }
    //5
    cout<<endl;
    for(int i=0; i<str.length(); i++){
        if(i==0){
            cout<<"..#..";
        }
        else if((i+1) %3 != 0){
            cout<<".#..";
        }
        else{
            cout<<".*..";
        } 
    }
    cout<<endl;

    
    return 0;
}