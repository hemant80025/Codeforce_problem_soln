#include<iostream>
using namespace std;

int main (){
    int w;
    cin >>w;

    if(w%2==0 && w!=2){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}



// 🥭 Question Summary:

// Pete and Billy bought a watermelon that weighs w kilos.
// They want to cut it into two parts, such that:

// Each part’s weight is an even number (like 2, 4, 6, 8, …).

// Both parts have positive weight (not zero).

// You have to check whether it’s possible or not.
// If yes → print YES
// If no → print NO

// 🧩 Pattern you can see:

// For even numbers, it’s possible, except when w = 2.

// For odd numbers, it’s never possible, because the sum of two even numbers is always even, and odd + even = odd.
