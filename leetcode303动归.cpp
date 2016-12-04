#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

class NumArray {
public:
	NumArray(vector<int> &nums) {
		cnt = nums.size();
	}

	int sumRange(int i, int j) {
		vector<vector<int> >dp;
		dp.resize(cnt + 10);
		for (int i = 0; i < cnt + 10; ++i)
			dp[i].resize(cnt);

	}

private:
	int cnt;
};

int main()
{
	int n;
	cin >> n;
	vector<int>vec;
	vec.resize(n);
	for (int i = 0; i < n; ++i)
		cin >> vec[i];
	NumArray arr(vec);
	
	return 0;
}