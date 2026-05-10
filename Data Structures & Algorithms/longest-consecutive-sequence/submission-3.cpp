class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int mx=1;
       int i=1;
       int count=1;
       if(nums.size()==0){return 0;}
       else{
       for(i=1;i<nums.size();i++)
       {
        if(nums[i]-nums[i-1]==1)
        {
            count++;
            if(count>mx){mx=count;}
        }
        else if(nums[i]==nums[i-1])
        {
            continue;
        }
        else
        {
            count=1;
        }
       }
       return mx;
       }
    }
};
