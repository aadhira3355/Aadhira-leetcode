class Solution {
public:
    string decodeString(string s) {
     stack<string>st;
     int n = s.size();
     for(int i=0;i<n;i++){
        if(s[i]!=']'){
             st.push(std::string(1, s[i]));
        }
        else{
             string substr="";
 while (st.top() != "[") {           
     substr=st.top()+substr;
             st.pop();
             }
             st.pop();
             string k="";
             while(!st.empty() && isdigit(st.top()[0])){
                k=st.top()+k;
                st.pop();
             }
             string res="";
             int num = std::stoi(k);
             for(int i=0 ; i<num;i++){
                res+=substr;
             }
             st.push(res);

        }   
     } 
     string result="";
     while(!st.empty()){
        result=st.top()+result;
        st.pop();
     }  
     return result;
    }
};