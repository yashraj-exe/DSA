#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v{10, 20, 30, 40, 50, 60, 70};

    int sum = 80;

    for (int i = 0; i < v.size(); i++)
    {

        for (int j = i + 1; j < v.size(); j++)
        {
            for (int k = j + 1; k < v.size(); k++)
            {

                // cout<<"("<<v[i]<<","<<v[j]<<","<<v[k]<<")"<<endl; all possible pairs
                
                if((v[i]+v[j]+v[k]) == sum){
                cout<<"("<<v[i]<<","<<v[j]<<","<<v[k]<<")"<<endl;
                }

            }
        }
    }

    return 0;
}