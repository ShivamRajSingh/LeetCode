 #include "codeblock.h"
 
 vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int, int> m;
    for (int i= 0; i<nums.size(); i++){
        if (m.find(target-nums[i]) != m.end())
            return { m[target-nums[i]] , i };
        m[nums[i]] = i;
    }
        return {};    
}
int main()
{
    vector<int> arr = input();
    int k;
    cin >> k;
    vector<int> res = twoSum(arr,k);
    print(res);
    
}