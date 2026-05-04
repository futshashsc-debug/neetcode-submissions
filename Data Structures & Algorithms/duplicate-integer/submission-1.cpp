#include<set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>unique;
       for(int n:nums)
       {
            unique.insert(n);
       }
       if(unique.size()==nums.size()){return false;}
       else{return true;}
    }
};