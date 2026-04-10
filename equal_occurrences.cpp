class Solution {
public:
    bool areOccurrencesEqual(string s) {
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        int count =0;
        for(int i=0; i<s.size(); i++){
            if(s[0] == s[i]){
                count++;
            }
        }
        for(int i=0; i<26; i++){
            int occur =0;
            for(int j=0; j<s.size(); j++){
                if(alpha[i] == s[j]){
                    occur++;
                }
            }
            if(occur != count && occur!=0){
                return false;
            }
        }
        return true;
    }
};
