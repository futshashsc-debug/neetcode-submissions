class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int r=0;
        vector<int>v;
        for(r=0;r<nums.size();r++)
        {
            if(nums[r]!=val)
            {
                v.push_back(nums[r]);
            }
        }
           nums=v;
        return v.size();
    }
};