#include<bits/stdc++.h>
using namespace std;

int main(){


    vector<int> a = {1,2,3,4,5};
    vector<int> b = {3,4,5};

    vector<int> interSection;

    for(int i = 0; i < a.size(); i++){
        for(int j = 0 ; j < b.size(); j++ ){
            if(a[i] == b[j]){
                b[j] = -1; // mark as done 
                interSection.push_back(a[i]);
            }
        }
    }


    for(int i = 0 ; i < interSection.size(); i++){
        cout<<interSection[i]<<" ";
    }




    return 0;
}