class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> sMap;
        std::map<char, int> tMap;

        for (char el : s){
            sMap[el]++;
        }

        for (char el : t){
            tMap[el]++;
        }

        if (sMap == tMap) return true;
        return false;
    }
};
