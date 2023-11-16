#include<iostream>
#include<vector>
using namespace std;

class binarySearch
{
private:
	int l;
	int r;
	int mid;
	int target;
	int ans=-1;
	vector<int>array;
public:
	binarySearch(vector<int>& array,int target) {
		l = 0;
		r = array.size() - 1;
		//mid = 0;
		this->target = target;
		this->array = array;
	}

	int find()
	{

		while (l < r)
		{
			mid = l + (r - l) / 2;
			if (array[mid] == target)
			{
				ans = mid;
			}
			else if (target > array[mid])
			{
				l = mid;
			}
			else
			{
				r = mid;
			}
		}

		return ans;
	}
};