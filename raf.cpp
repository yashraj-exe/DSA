// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int row = 3, col = 3;
    
    int min = INT_MIN;
    int max = INT_MIN;
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
            
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    
    cout<<"Min and Max element is "<<min<<" "<<max;

    return 0;
}