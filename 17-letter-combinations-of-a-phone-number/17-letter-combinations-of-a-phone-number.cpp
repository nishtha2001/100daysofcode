class Solution {
public:
    vector<string> letterCombinations(string digits) {
	if(digits == "") return {};
	vector<string> mappings{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans{""};
	for(auto digit : digits){
		vector<string> extendCombination;
		for(auto& currentCombination : ans)
			for(auto it : mappings[digit - '2'])
				extendCombination.push_back(currentCombination + it);                            
		ans = move(extendCombination); 
	}
	return ans;
}
};