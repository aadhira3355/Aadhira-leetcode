class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int n=chars.size();
        int i=0;
        while(i<n){
            int count=0;
            char charcurr=chars[i];
            //find the count of duplicates
            while(i<n && charcurr==chars[i]){
                count++;
                i++;
            }
            //assign
            chars[index]=charcurr;
            index++;
            if(count>1){
                string str=to_string(count);
                for(char &ch :str){
                chars[index]=ch;
                index++;
                }
            }
        }
    return index;
    }

};