#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row = 3;
    int col = 3;

    // row wise sum 
    for(int i = 0 ; i < row ; i++){

        int sum = 0;

        for(int j = 0 ; j < col; j ++){

            sum += arr[i][j];
        }

        cout<<"Sum of Row "<<i<<" is "<<sum<<endl;
    }

    // coloum wise sum

    for(int i = 0 ; i < row ; i++){

        int sum = 0;

        for(int j = 0 ; j < col; j ++){

            sum += arr[j][i];
        }

        cout<<"Sum of Coloum "<<i<<" is "<<sum<<endl;
    }



    return 0;
}