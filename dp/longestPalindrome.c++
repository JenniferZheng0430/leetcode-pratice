#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int longestPalindrome(string s) {
    //logic: using hashmap to store the frequency of each char

    int result = 0;
    bool flag = false; // check if a odd number frequency already appears
    unordered_map<char,int> map;

// iterate through s to construct our frequency-map
    for (int i=0;i<s.length();i++){
        map[s[i]]++;
    }
//using auto to iterate through map
    for (auto it=map.begin(); it!=map.end();it++){
        if (it->second % 2 == 0) result += it->second;
        else{
            if (flag){
                result += it->second - 1;
            }
            else{
                result += it->second;
                flag = true;
            }
        }
    }
    return result;
}

int main(){
    string s = "abccccdd";
    cout << longestPalindrome(s);
}