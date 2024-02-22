#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{7, 8, 3, 4, 5};

    vector<int> unionWithoutDuplicate; // 1,2,3,4,5,7,8

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if (v1[i] == v2[j])
            {
                v2[j] = INT_MIN;
            }
        }
    }

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] != INT_MIN)
        {
            unionWithoutDuplicate.push_back(v1[i]);
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        if (v2[i] != INT_MIN)
        {
            unionWithoutDuplicate.push_back(v2[i]);
        }
    }


    for(int i =0 ; i < unionWithoutDuplicate.size(); i++){
        cout<<unionWithoutDuplicate[i]<<" ";
    }

    return 0;
}