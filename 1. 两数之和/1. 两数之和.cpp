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
			numsMap.insert(pair<int, int>(nums[i], i));		// pair 关键字将两个数据合为一个数组，配合map使用
		}
		vector<int> result;							// 创建一个容器存储结果

		for (int i = 0; i < nums.size(); i++)		// 遍历来查询
		{
			//auto iter = numsMap.find(target - nums[i]);						// 可以使用auto关键字匹配参数类型
			map<int, int>::iterator iter = numsMap.find(target - nums[i]);		// 创建一个迭代器接收find查找结果
			if (iter != numsMap.end() && iter->second != i)						// 如果查找到结果并且不是自身
			{
				result.push_back(i);					// 将原数据下表放入容器
				result.push_back(iter->second);			// 将匹配到的数据下表放入容器
				return result;							// 返回迭代器结果
			}
		}
		return result;
	}
};

int main(void)
{
	return 0;
}