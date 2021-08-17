#include "codeblock.h"

vector<vector<int>> threeSum(vector<int>& arr, int targetSum) {
    int n = arr.size();
    if(n < 3){
        return {};
    }


    vector <vector<int>> res;
    sort(arr.begin(), arr.end());
    for(int i =0; i < n-2; i++){
        if(i > 0 && arr[i] == arr[i-1])
            continue;
        int j = i+1;
        int k = n-1;
        int currSum = 0;
        
        while(j < k){
            currSum = arr[i] + arr[j] + arr[k];
            if(currSum == targetSum){
                res.push_back({arr[i],arr[j],arr[k]});
                j++;
                while(arr[j]==arr[j-1] && j < k)  
                    j++;
                k--;
            }else if (currSum < targetSum){
                j++;
            }else{
                k--;
            }
        }
    }
    return res;
}

int main ()
{
    vector<int> arr = input();
    int targetSum;
    cout << "Enter target Sum : ";
    cin >> targetSum;
    vector<vector<int>> result = threeSum(arr, targetSum);
    print(result);
    return 0;
}