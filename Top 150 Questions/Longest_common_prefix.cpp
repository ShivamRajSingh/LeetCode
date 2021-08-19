 #include "codeblock.h"

 string longestCommonPrefix(vector<string>& strs) {
    string pat = strs[0];
    for(int i = 1; i < strs.size(); i++){
        while(strs[i].find(pat) != 0){
            pat = pat.substr(0, pat.size()-1);
        }
    }
    return pat;
}

int main()
{
    vector <string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
}