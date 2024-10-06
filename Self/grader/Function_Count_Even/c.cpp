#include <iostream>
using namespace std;

int count_even(int arr[], int n){
    int result =0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            result++;
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    cout << count_even(arr, n);
    return 0;
}