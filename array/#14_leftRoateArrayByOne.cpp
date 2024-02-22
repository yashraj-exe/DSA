
#include <iostream>
using namespace std;
int main()
{

    /*
     question we have one array where we have to shift all the elements left by 1 and 0th element to the last

     Original array: [4, 7, 2, 9, 1]
     Left rotated array: [7, 2, 9, 1, 4]

     Original array: ['a', 'b', 'c', 'd', 'e']
     Left rotated array: ['b', 'c', 'd', 'e', 'a']
     
     Original array: [10, 20, 30, 40, 50, 60]
     Left rotated array: [20, 30, 40, 50, 60, 10]

    */

    int arr[] = {10, 20, 30, 40, 50, 60};
    int s = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = i + 1;

    while (j < s)
    {
        swap(arr[i], arr[j]);
        i++;
        j++;
    }

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/* Optiomal approach

    both works same but there is no swaping here 

    #include <iostream>
    using namespace std;
    int main() {
    
    int arr[] = {10, 20, 30, 40, 50, 60};
    int s = sizeof(arr)/sizeof(arr[0]);
    
    int temp = arr[0];
    
    for(int i = 1 ; i < s ; i++){
        arr[i - 1] = arr[i];
    }
    
    arr[s-1] = temp;
    
    for(int num : arr){
        cout<<num<<" ";
    }
        
    
    return 0;
}


*/