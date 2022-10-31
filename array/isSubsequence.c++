#include <iostream>
#include <string>


using namespace std;

bool isSubsequence(string s,string t){
    int s_size = s.length();
    int t_size = t.length();

    int curIndex = 0;

    for (int i=0;i<s_size;i++){
        while (curIndex < t_size && s[i] != t[curIndex]){
            curIndex++;
        }
        if (curIndex >= t_size) return false;

        curIndex++;
    }
    return true;
}

int main(){
    string s = "abc";
    string t = "ahbgdc";
    cout << isSubsequence(s,t);
}