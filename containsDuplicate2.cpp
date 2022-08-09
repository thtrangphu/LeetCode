https://leetcode.com/problems/contains-duplicate/discuss/61110/C++-solutions-(sorting-maps-and-sets).
bool containsDuplicate1(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i=0; i<int(nums.size())-1; i++) {
        if (nums[i]==nums[i+1])
            return true;
    }
    return false;    
}

bool containsDuplicate2(vector<int>& nums) {
    map<int, bool> myMap;
    // unordered_map<int, bool> myMap;
    for (auto& num: nums) {
        if (myMap.find(num) != myMap.end())
            return true;
        else
            myMap[num] = true;
    }
    return false;
}

bool containsDuplicate3(vector<int>& nums) {
    multimap<int, bool> myMap;
    // unordered_multimap<int, bool> myMap;
    for (auto& num: nums) {
        if (myMap.find(num) != myMap.end())
            return true;
        myMap.insert(make_pair(num, true));
    }
    return false;
}

bool containsDuplicate4(vector<int>& nums) {
    set<int> mySet;
    // unordered_set<int> mySet;
    // multiset<int> mySet;
    // unordered_multiset<int> mySet;
    for (auto& num: nums) {
        if (mySet.find(num) != mySet.end())
            return true;
        mySet.insert(num);
    }
    return false;
}
sort
cpp
map
set
