#include<bits/stdc++.h>
using namespace std;


int main(){


    int zeroCount = 0, oncesCount = 0;

    int arr[] = {1,1,1,1,1,1,0};

    int s = sizeof(arr)/sizeof(arr[0]);


    for(int i = 0 ; i < s ; i ++){
        if(arr[i] == 0 ){
            zeroCount++;
        }else{
            oncesCount++;
        }
    }

    cout<<"Zeros Count is "<< zeroCount<< endl;
    cout<<"Onces Count is "<< oncesCount<< endl;
    


    return 0;
}
