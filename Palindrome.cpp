//
// Created by Bertin Mihigo Sano on 2023-07-20.
//
#include <string>
#include <iostream>

using namespace std;

bool testPalindrome(string s){
    int s_size = (int) s.size();
    s_size--;
    string ss;
    for(int i=s_size;i>=0;i--){ // a loop to reverse param string s
        ss[i] = s[s_size];
    }
    ss = (string) ss;
    cout << ss << endl;
    if(ss==s)
        return true;
    else
        return false;

}

int main(){
    string in, reversed_in;
    int in_size;
    cout <<"Type an a word/statement to verify if it's a palindrome" << endl;
    cin >> in;
    cout << testPalindrome(in) << endl;

}