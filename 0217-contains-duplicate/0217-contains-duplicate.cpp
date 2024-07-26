class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> megaSet;
        int s = nums.size()-1;
        //check to see a match
        for(int i = 0;i<=s;i++){
            if(megaSet.count(nums[i])){ //1 if present
                return true;
            }
            //if we don't see a match
            megaSet.insert(nums[i]);
        }
        return false;
    }
};