 #include "codeblock.h"

 int removeDuplicates(vector<int>& arr) {
    if(arr.size() == 0)
        return {};
    
    int j =1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[j-1] != arr[i]){
            arr[j] = arr[i];
            j++;
        }
    }
    return j;
}

int main()
{
    vector <int> arr = input();
    cout << removeDuplicates(arr);
    return 0;
}