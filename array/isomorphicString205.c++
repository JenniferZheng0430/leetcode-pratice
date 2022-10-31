// logic
// construct two hashmaps to see if there is one-to-one pair
// For example, a-b b-a, c-d d-c, 
// it will return false if there is a-b,b-c

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


    bool isIsomorphic(string s,string t){
        int size_s = s.length();
        int size_t = t.length();

        if (size_s != size_t){
            return false;
        }

        unordered_map<char,char> s_map;
        unordered_map<char,char> t_map;

        for (int i=0;i<size_s;i++){
            if (s_map.count(s[i])==0 && t_map.count(t[i])==0){
                s_map[s[i]] = t[i];
                t_map[t[i]] = s[i]; 
            }
            else if (s_map[s[i]] != t[i] || t_map[t[i]] != s[i]){
                return false;
            }
        }
        return true;
    }

    int main(){
        string s = "egg";
        string t = "add";
        cout << isIsomorphic(s,t);
    }
