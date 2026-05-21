class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) { return false;}
        set<int> unique;
        for(auto it : nums){
            unique.insert(it);
        }
        if(unique.size()!=nums.size()){ return true;}
        else{ return false;}
        
    }
};