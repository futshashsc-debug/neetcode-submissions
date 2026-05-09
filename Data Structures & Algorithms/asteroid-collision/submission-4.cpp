class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        int i=0;
        st.push(asteroids[i]);
        for(i=1;i<asteroids.size();i++)
        {
            x:
            if(!st.empty() && st.top()>0 && asteroids[i]<0)
            {
                if(abs(st.top())>abs(asteroids[i])){continue;}
                else if(abs(st.top())==abs(asteroids[i]))
                {
                    st.pop();
                }
                else
                {
                    st.pop();
                    goto x;
                }
            }
            else
            {
                st.push(asteroids[i]);
            }

        }
        vector<int>v;
        while(!st.empty())
        {
             v.push_back(st.top());
             st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};