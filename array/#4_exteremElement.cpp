#include<bits/stdc++.h>

using namespace std;

int main(){

    /*
    i/p = {1,2,3,4,5,6,7}
    out = {1,7,2,6,3,5,4}
    */


    int arr[] = {1,2,3,4,5,6,7};
    int s = sizeof(arr)/sizeof(arr[0]);

    int start = 0, end = s - 1;

    while (start <= end)
    {
        if(start == end){
            cout<<arr[start]<<" ";
        }else{
            cout<<arr[start]<<" "<<arr[end]<<" "; 
        }

        start ++;
        end --;
    }
    


    return 0;
}