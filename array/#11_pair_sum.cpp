#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {10, 20, 30, 40, 50, 60};

    int sum = 50;

    for (int i = 0; i < v.size(); i++)
    {
        bool isFoundPair = false;
        for (int j = i + 1; j < v.size(); j++)
        {
            // cout<<"("<<v[i]<<","<<v[j]<<")"<<endl; // printing all the possible pairs

            if ((v[i] + v[j]) == sum)
            {
                cout << "(" << v[i] << "," << v[j] << ")" << endl; // printing all the possible pairs
                isFoundPair = true;
                break;
            }
        }
        if(isFoundPair){
            break;
        }
    }

    return 0;
}