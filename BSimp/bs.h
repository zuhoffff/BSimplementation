#pragma once
#include<vector>
using namespace std;

class binarySearch
{
private:
	int ans;//not necessary we can avoid using that variable to reduse memory usage 
public:
	binarySearch();
	int find(vector<int>& array, int l, int r, int target);
};