#pragma once
#include<string>
#include<vector>

class LetterGroupOfNums {
private:
	std::string DigToChar[8] = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	int len = 0;
	void StringPush(std::vector<std::string>& result, std::string temp, int i, std::string& digits) {
		if (i == len) {
			result.push_back(temp);
			return;
		}
		int index = (int)(digits[i] - '2');
		for (int j = 0, l = DigToChar[index].size(); j <l; j++)
			StringPush(result, temp + DigToChar[index][j], i + 1, digits);
	}
public:
	std::vector<std::string> letterCombinations(std::string digits) {
		len = digits.size();
		std::vector<std::string> res;
		if (len == 0) return res;
		std::string str;
		StringPush(res, str, 0, digits);
		return res;
	}
};