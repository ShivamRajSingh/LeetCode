#include "codeblock.h"

int binarySearch (vector<int>arr, int start, int end, int target)
{
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        
        if(arr[mid] == target){
            return mid;
        }else if (target < arr[mid]){
            end = mid-1;
        }else{
            start = mid +1;
        }
    }
    
    return -1;
}
int findMin(vector<int>nums) {
    int n = nums.size();
    int start = 0;
    int end = n-1;
    
    if(nums[start] <= nums[end]){
        return 0;
    }
    
    int pivot = -1;
    
    while(start <= end){
        if(nums[start] <= nums[end]){
            return start;
        }
        int mid = start + (end-start)/2;
        int prev = (mid+n-1) % n;
        int next = (mid+1) % n;
        
        if(nums[mid] <= nums[prev] && nums[mid] <= nums[next]){
            pivot = mid;
            break;
        }
        
        if(nums[start] <= nums[mid]){
            start = mid+1;
        }else if (nums[mid] <= nums[end]){
            end = mid-1;
        }
    }
    return pivot;
}

int search(vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0;
    int end = n-1;
    
    if(arr[start] <= arr[end]){
        return binarySearch(arr,start,end,target);
    }
    
    int pivot = findMin(arr);

    int res1 = binarySearch(arr,0,pivot-1,target);
    int res2 = binarySearch(arr,pivot,n-1,target);
    
    if(res1 == -1){
        return res2;
    }else{
        return res1;
    }
}
int main(){
    vector<int> arr = input();
    int n;
    cout << "Enter the element you want to search : ";
    cin >> n;
    cout << search(arr , n);
    return 0;
}