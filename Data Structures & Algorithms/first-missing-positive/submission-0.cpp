class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int min=1;
        sort(nums.begin(),nums.end());
        for(int n:nums)
        {
            if(n>0 && min==n){min=n+1;}
        }
        
        return min;
    }
};