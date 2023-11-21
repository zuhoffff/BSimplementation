#include<iostream>
#include "bs.h"
using namespace std;

int main()
{
	vector<int> arr{ 1,4,6,7,8,11,55,56,70,90 };

	binarySearch bs;

	cout << bs.find(arr, 0, arr.size() - 1, 7);

	return 0;
}