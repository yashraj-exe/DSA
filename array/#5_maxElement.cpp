#include<bits/stdc++.h>;
using namespace std;

int main(){

    /*Finding the max element ina arrary*/


    int minElement = INT_MAX;

    int arr[]= {-112, 1,222,3,4,9,6,5,7};

    int s = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < s ; i++){

        if(arr[i] < minElement){
            minElement = arr[i];
        }

    }

    cout<<"Max Element is "<<minElement;


    return 0;
}