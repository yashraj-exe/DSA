#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){

    /* to optimize this use sqrt of a n number bcz if there any factors present of n number of their sqrt then this is not a prime number 

    for(int i = 2 ; i <= sqrt(n); i++);


    */
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }

    return true;

}

int main(){


    int n;
    cin>>n;

    bool isPrime = checkPrime(n);


    if(isPrime){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }



    return 0;
}