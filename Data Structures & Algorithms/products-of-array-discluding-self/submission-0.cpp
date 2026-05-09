class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            long long product=1;
            if(count(nums.begin(),nums.end(),0)!=1){
            for(int i=0;i<nums.size();i++)
            {
                
                product=product*nums[i];
            }
            vector<int>output(nums.size());
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0){output[i]=product;}
                else{output[i]=product/nums[i];}
            }
            
            return output;
            }
            else
            {
                 for(int i=0;i<nums.size();i++)
                     {
                        if(nums[i]==0){continue;}
                         product=product*nums[i];
                     }
           vector<int>output(nums.size());
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0){output[i]=product;}
                else
                {
                    output[i]=0;
                }
            }


                 return output;
            }
    }
};
