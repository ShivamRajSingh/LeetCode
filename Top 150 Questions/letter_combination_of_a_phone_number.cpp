#include "codeblock.h"

vector <string> res;
vector<string> letterCombinations(string digits, string temp="", int index=0) {
    if(digits == ""){
        return {};
    }
    
    if(index==digits.size()){
        res.push_back(temp);
    }
    if(digits[index]=='2'){
        temp.push_back('a');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('b');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('c');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
    }
    
        if(digits[index]=='3'){
        temp.push_back('d');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('e');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('f');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
    }
    
        if(digits[index]=='4'){
        temp.push_back('g');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('h');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('i');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
    }
    
        if(digits[index]=='5'){
        temp.push_back('j');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('k');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('l');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
    }
    
    
    if(digits[index]=='6'){
        temp.push_back('m');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('n');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('o');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
    }
    
    
        if(digits[index]=='7'){
        temp.push_back('p');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('q');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('r');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('s');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
    }
    
    if(digits[index]=='8'){
        temp.push_back('t');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('u');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('v');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
    }
    
    if(digits[index]=='9'){
        temp.push_back('w');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('x');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('y');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
        temp.push_back('z');
        letterCombinations(digits, temp, index+1);
        temp.pop_back();
    }
    return res;
}
int main()
{
    string s,temp;
    getline(cin,s);
    vector<string> result = letterCombinations(s, temp, 0);
    for(auto i : result){
        cout << i << " ";
    }
}