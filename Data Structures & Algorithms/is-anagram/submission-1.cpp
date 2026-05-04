
class Solution {
public:
    bool isAnagram(string s, string t) {
        int countx=0;
       for(char c:s)
       {
        if(count(s.begin(),s.end(),c)!=count(t.begin(),t.end(),c))
        {
            countx++;
        }
       }
       for(char c:t)
       {
        if(count(s.begin(),s.end(),c)!=count(t.begin(),t.end(),c))
        {
            countx++;
        }
       }
       if(countx>0){return false;}
       else{return true;}
    }
};
