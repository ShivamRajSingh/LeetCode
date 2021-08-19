#include "codeblock.h"

int romanToInt(string s) {
    unordered_map< char ,int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    
    int last=0, val = 0;
    
    for(int i = s.length()-1; i >= 0 ; i--){
        if(mp[s[i]] >= last){
            val += mp[s[i]];
        }else{
            val -= mp[s[i]];
        }  
        last = mp[s[i]];
    }
    return val;
}
int main()
{
    string s;
    cout << "Enter Roman Number : ";
    getline(cin,s);
    cout << "In Decimal : " << romanToInt(s);
    return 0;
}