#include <bits/stdc++.h>
using namespace std;

int main()
{
    char letter = 'A';
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(letter == 'Z'+1) letter = 'A';
            cout<<letter;
            letter++;
        }
        cout<<endl;
    }

  return 0;
}