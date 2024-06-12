class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       stack<int>st;
       for(int &a : asteroids){
        
        //when collsion happens?
        while(!st.empty() && a<0 && st.top()>0){
            int sum= a + st.top();
            if(sum>0){
                a=0;
               
            }
            else if(sum<0){
                st.pop();
            }
            else{ //sum==0
                a=0;
                st.pop();
                
            }
        }
        if(a!=0)
        st.push(a);
       }
       

       vector<int> res(st.size());
        for (int i = st.size() - 1; i >= 0; --i) {
            res[i] = st.top();
            st.pop();
        }
        
        return res;
        
    }
};