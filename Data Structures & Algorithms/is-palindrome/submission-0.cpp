class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(char c:s)
        {
            if((c>='A' && c<='Z')||(c>='a' && c<='z')||(c>='0' && c<='9'))
           {char x=toupper(c);
            t.push_back(x);
           }
        }
        int l=0,r=t.size()-1;
        while(l<r)
        {
            if(t[l]!=t[r]){return false;}
            else{
                l++;
                r--;
            }
        }
        return true;

    }
};
