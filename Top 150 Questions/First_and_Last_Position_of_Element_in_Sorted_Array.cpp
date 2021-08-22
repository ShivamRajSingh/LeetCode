#include"codeblock.h"

vector<int> searchRange(vector<int>& nums, int target) {
    int low,high;
    low = 0;
    high = nums.size()-1;
    int temp = -1;
    vector<int>res;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
            temp = mid;
            high = mid-1;
        }else if (nums[mid] > target){
            high = mid-1;
        }else{
            low = mid +1;   
        }
    }
    res.push_back(temp);
    
    low = 0;
    high = nums.size()-1;
    temp = -1;
    
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
            temp = mid;
            low = mid+1;
        }else if (nums[mid] > target){
            high = mid-1;
        }else{
            low = mid +1;   
        }
    }
    res.push_back(temp);
    
    return res;
}
int main()
{
    vector<int> arr = input();
    int n;
    cout << "Enter the element for which you want to find the range : ";
    cin >> n;
    vector<int> res = searchRange(arr,n);
    print(res);
    return 0;
}