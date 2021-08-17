#include"codeblock.h"

vector<vector<string>> groupAnagrams(vector<string>& s) {
    unordered_map<string, vector<string>> mp;
    for(auto i: s){
        string temp = i;
        sort(temp.begin(), temp.end());
        mp[temp].push_back(i);
    }
    
    vector<vector<string>> res;
    for(auto i: mp){
        res.push_back(i.second);
    }
    
    return res;
}
int main()
{
    vector<string> s = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> v = groupAnagrams(s);
    
    for(auto i : v){
        for(auto j : i){
            cout << j << " ";
        }
        cout <<"\n";
    }
    return 0;
}