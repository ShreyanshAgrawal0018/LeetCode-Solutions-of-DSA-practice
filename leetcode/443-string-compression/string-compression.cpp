class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size()==1){
            return chars.size();
        }
        string s;
       
        
        for (int i=0; i<chars.size();i++){
            char p = chars[i];
            int c=0;
            while(i<chars.size() && chars[i]==p){
                c++;
                i++;
            }
            s+=p;
            if (c>1) s += to_string(c);;
            i--;
        }
        chars.clear();
        for (auto val : s){
            chars.push_back(val);
        }
        return s.length();
    }
};