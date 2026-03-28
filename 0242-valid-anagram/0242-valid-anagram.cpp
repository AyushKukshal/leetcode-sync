class Solution {
public:
    bool isAnagram(string s, string t) {
        int fre[26]={0};
        for(char c:s){
            fre[c-'a']++;
        }
        for(char c:t){
            fre[c-'a']--;
        }
        for(int i =0 ; i<26;i++){
             if (fre[i] != 0) return false;
    }return true;
        }
};