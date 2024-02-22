#include<bits/stdc++.h>
using namespace std;

int main(){

    /* store in memory jst like a normal array and fourmula to get a particular element index in an array is = c * i + j where c is total column and i = elemnt row j = element column*/

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };


    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}