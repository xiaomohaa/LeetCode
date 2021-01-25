
/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
你可以按任意顺序返回答案。

示例 1：
输入：nums = [2,7,11,15], target = 9
输出：[0,1]
解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。

示例 2：
输入：nums = [3,2,4], target = 6
输出：[1,2]

示例 3：
输入：nums = [3,3], target = 6
输出：[0,1]
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		map<int, int>numsMap;					// 使用map存储数据，方便查询
		for (int i = 0; i < nums.size(); i++)
		{
			numsMap.insert(pair<int, int>(nums[i], i));
		}
		vector<int> result;							// 创建一个容器存储结果

		for (int i = 0; i < nums.size(); i++)		// 遍历来查询
		{
			//auto iter = numsMap.find(target - nums[i]);							// 可以使用auto关键字字哦东匹配参数类型
			map<int, int>::iterator iter = numsMap.find(target - nums[i]);		// 创建一个迭代器接收find查找结果
			if (iter != numsMap.end() && iter->second != i)						// 如果查找到结果并且不是自身
			{
				result.push_back(i);							// 将原数据下表放入容器
				result.push_back(iter->second);			// 将匹配到的数据下表放入容器
				return result;									// 返回迭代器结果
			}
		}
		return result;
	}
};


int main(void)
{

	return 0;
}