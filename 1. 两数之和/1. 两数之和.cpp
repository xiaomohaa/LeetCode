#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		map<int, int>numsMap;					// ʹ��map�洢���ݣ������ѯ
		for (int i = 0; i < nums.size(); i++)
		{
			numsMap.insert(pair<int, int>(nums[i], i));		// pair �ؼ��ֽ��������ݺ�Ϊһ�����飬���mapʹ��
		}
		vector<int> result;							// ����һ�������洢���

		for (int i = 0; i < nums.size(); i++)		// ��������ѯ
		{
			//auto iter = numsMap.find(target - nums[i]);						// ����ʹ��auto�ؼ���ƥ���������
			map<int, int>::iterator iter = numsMap.find(target - nums[i]);		// ����һ������������find���ҽ��
			if (iter != numsMap.end() && iter->second != i)						// ������ҵ�������Ҳ�������
			{
				result.push_back(i);					// ��ԭ�����±��������
				result.push_back(iter->second);			// ��ƥ�䵽�������±��������
				return result;							// ���ص��������
			}
		}
		return result;
	}
};

int main(void)
{
	return 0;
}