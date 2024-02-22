#include<bits/stdc++.h>
using namespace std;


int main(){


    // unique element means all elements occours twise expect one element in this case 4 is unique
    int arr[] = {1,2,3,2,3,1,4,4,5};

    int s = sizeof(arr)/sizeof(arr[0]);

    int ans = 0;


    for(int i = 0 ; i < s ; i++){

        ans = ans ^ arr[i];

    };

    cout<<"Unique Element is "<<ans;


    return 0;
}