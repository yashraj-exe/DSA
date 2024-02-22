#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4};
    vector<int> v2 = {5, 6};

    vector<int> unionVec;

    for(int i = 0 ; i < v.size(); i++){
        unionVec.push_back(v[i]);
    }
    for(int i = 0 ; i < v2.size(); i++){
        unionVec.push_back(v2[i]);
    }

    for(int i = 0 ; i < unionVec.size(); i++){
        cout<<unionVec[i]<<" ";
    }

    return 0;
}