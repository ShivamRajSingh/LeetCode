#include "codeblock.h"

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size()-1;
    
    int maxArea = -1e5;
    
    while(left < right){
        if(height[left] < height[right]){
            maxArea = max(maxArea , height[left] * (right-left));
            left++;
        }else{
            maxArea = max(maxArea , height[right] * (right-left));
            right--;
        }
    }
    
    return maxArea;
}
int main()
{
    vector<int> arr = input();
    cout << "Container with most water : " << maxArea(arr);    
}
