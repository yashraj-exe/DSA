#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v{0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1};

    int start = 0;
    int end = v.size() - 1;

    while (start < end)
    {

        // move left pointer to its correct position

        while (v[start] == 0 && start < end)
        {
            start++;
        }

        // move right pointer to its correct position

        while (v[end] == 1 && start < end)
        {
            end--;
        }

        if (start < end)  // at this point we have to swap the value bcz start points to 1 and end point to 0 thats why
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }
    }


    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}




/* another approch but not eficient 
    int arr[] = {1,1,1,1,1,0,0,0,0,0,1,0,1,0,1};
    int s  = sizeof(arr)/sizeof(arr[0]);
    int count[2] = {0};
    
    for(int i = 0 ; i < s ; i++){
        count[arr[i]]++;
    }
    
    int index = 0;
    for(int i = 0 ; i < count[0]; i++){
        arr[index++] = 0; 
    }
    
    for(int j = 0 ; j < count[1]; j++){
        arr[index++] = 1;
    }
    
    for(int i = 0 ; i < s ; i++){
        cout<<arr[i]<<" ";
    }
*/