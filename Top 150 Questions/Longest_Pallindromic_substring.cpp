#include<iostream>
#include<climits>
#include<unordered_map>
#include<string>
using namespace std;

string longestPalindrome(string s) {
    string res = "";
    // For strings with Odd lengths
    for (int i=0; i<s.size(); i++) { 
        int d = 1;
        string curr = "";
        while (i-d>=0 && i+d<s.size() && s[i-d]==s[i+d]) {
            d++;
        }
        d--;
        curr = s.substr(i-d, 2*d+1);
        if (curr.size()>res.size()) {
            res = curr;
        }
    }
    // For strings with Even Lengths        
    for (int i=0; i<s.size(); i++) {
        int d = 0;
        while (i+d+1<s.size() && i-d>=0 && s[i-d]==s[i+d+1]) {
            d++;
        }
        d--;
        string curr = "";
        curr = s.substr(i-d, 2*d+2);
        if (curr.size()>res.size()) {
            res = curr;
        }            
    }           
    
    return res;                
}
int main()
{
    string s;
    cout << "Enter String : ";
    getline(cin ,s);
    cout << "Longest pallindrome : " << longestPalindrome(s) << endl;
}