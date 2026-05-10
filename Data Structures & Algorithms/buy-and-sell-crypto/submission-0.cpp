class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int l=0,r=0,max=0;
        while(r<prices.size())
        {
            int diff=prices[r]-prices[l];
            if(diff<0)
            {
                l=r;
            }
            else
            {
                if(diff>max){max=diff;}
                r++;
            }
        }
        return max;
    }
};
