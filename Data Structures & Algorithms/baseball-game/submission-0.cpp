class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string>st;
        for(string c:operations)
        {
            if(c!="C" && c!="D" && c!="+")
            {
                st.push(c);
            }
            else if(c=="D")
            {
                st.push(to_string(stoi(st.top())*2));
            }
            else if(c=="C")
            {
                st.pop();
            }
            else if(c=="+")
            {
            string temp2=st.top();st.pop();
            string temp1=st.top();st.pop();
            int x=stoi(temp1)+stoi(temp2);
            st.push(temp1);st.push(temp2);st.push(to_string(x));
            }
        }
        int sum=0;
        while(!st.empty())
        {
               sum=sum+stoi(st.top());
               st.pop();
        }
        return sum;
    }
};