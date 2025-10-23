#include<iostream>
using namespace std;

int main (){
    int n;
    string s;
   cin>>n;
    while(n--){
         cin>>s;
        if(s.size()>10){
            cout<<s[0]<<s.size()-2<<s.back()<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}

// 🅰️ Problem: Way Too Long Words
// 🧠 Idea:

// If a word is longer than 10 letters,
// we shorten it using this rule:

// 👉 first letter + (number of middle letters) + last letter

// If the word is 10 letters or fewer, we keep it same.
