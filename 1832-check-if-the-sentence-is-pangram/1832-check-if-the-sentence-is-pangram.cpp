class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> S;
        
        for(auto it : sentence){
            S.insert(it);
        }
        
        if(S.size() == 26)
            return true;
        else 
            return false;
    }
};