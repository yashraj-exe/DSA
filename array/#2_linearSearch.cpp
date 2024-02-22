#include<bits/stdc++.h>

using namespace std;

int main(){


    int arr[] = {1,2,3,4,5,6,7,8,9};

    int s = sizeof(arr)/sizeof(arr[0]);


    int key;

    cin>>key;

    bool isFound = false;

    for(int i = 0 ; i < s ; i++){
        if(arr[i] == key){
            isFound = true;
            break;
        }
    }


    if(isFound){
        cout<<"Present"<<endl;
    }else{
        cout<<"Not Found";
    }


    return 0;
}
