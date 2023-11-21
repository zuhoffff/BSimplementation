#include "bs.h"
#include<iostream>

binarySearch::binarySearch() : ans(-1) {}

int binarySearch::find(vector<int>& array, int l, int r, int target)
{
		int mid;//=0 // int ans;
		while (l <= r)// ans==-1
		{
			std::cout << "Iteration\n";
			mid = l + (r - l) / 2;
			std::cout << "Mid" << ' ' << mid << '\n';
			if (array[mid] == target)
			{
				ans = mid;
				break;
			}
			else if (target > array[mid])
			{
				l = mid+1;
			}
			else
			{
				r = mid-1;
			}
		}

		return ans;
}