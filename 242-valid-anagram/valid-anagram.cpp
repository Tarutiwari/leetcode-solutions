class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()) return false;
    map<char,int>freq;
    for(char c:s)
    {
    freq[c]++;
    }
    for(char c:t){
        freq[c]--;
    }
    for(int i=0; i<freq.size();i++){
        if(freq[i]!=0)
        {
            return false;
        }
    }
    return true;
    }
};