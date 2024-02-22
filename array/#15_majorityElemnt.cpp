#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &vec){
    int candidate = vec[0];
    int count = 1;

    // finding perfect candidate
    for(int i = 1 ; i < vec.size(); i++){
        if(candidate == vec[i]){
            count++;
        }else{
            count--;
        }

        if(count == 0){
            candidate = vec[i];
            count = 1;
        }

    }

    // finding count of the candiate

    count = 0;
    for(int num : vec){
        if (num == candidate){
            count++;
        }
    }

    if(count > vec.size() / 2){
        return candidate;
    }else{
        return -1; // no candiate found 
    }


}


int main(){

    /*
    
    majority element is array size divide by 2 and the particular element occurs array size / 2 + 1 then this is a majority element  

    arrSize = 10
    10/2 = 5
    if 1 occurs 6 time then this is majority element  

    for this {1,1,1,1,2,1,3,4,5,1,2} majority elemnt is 1
    bcz arrSize = 11/2 = 5
    1 occurs = 6 time 
    6 > 5 thats why 1 is majority element 


    */

    vector<int> arr{1,1,1,1,2,2,2,2};



    int majority = majorityElement(arr);

    if(majority != -1){
        cout<<"Majority Element is "<<majority;
    }else{
        cout<<"There is no majority element"<<endl;
    }




}