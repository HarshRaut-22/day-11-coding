class Solution {
public:
    bool halvesAreAlike(string s) {
        for(int i=0; i<s.size(); i++){
            s[i] = tolower(s[i]);
        }
        int a_vowel=0, b_vowel=0;
        for(int i=0; i<s.size()/2; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                a_vowel++;
            }
        }
        for(int i=s.size()-1; i>=s.size()/2; i--){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                b_vowel++;
            }
        }
        if(a_vowel == b_vowel){
            return true;
        }
        return false;
    }
};
