class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        //int mid = (low+high)/2;
        // if(target>nums[high]){
        //     return high;
        // }
        while(low<=high){
            int mid = low+(high-low)/2;
            if(target==nums[mid]) return mid;
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};