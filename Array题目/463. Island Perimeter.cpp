#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;



class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int Len=nums.size();
        int n1=0,n2=1,sum=0;
       while(n2<Len)
        {
            nums[n2-1]=nums[n2]-nums[n2-1];
            n2++;
        }
        if(k!=0)
        {
            int sum2=0;
            int j=0;
            for(int i=0;i<Len-1;i++)
            {
                sum2+=nums[i];
                if(nums[i]==0){
                    if(sum2==0){j++;}//起点重复的时候才调整起点！
                    continue;//这个地方太容易错了！！！
                }
                //sum2+=nums[i];
                if(sum2==k){sum++;i=j;j++;sum2=0;}
                else if(sum2>k){sum2=0;i=j;j++;}
            }
        }
        else
        {
            for(int i=0;i<Len-1;i++)
            {
                if(nums[i]==0)
                {
                    sum++;
                    while(nums[++i]==0);
                }
            }
        }
        return sum;
    }
};
void main()
{
	int v1[]={1,1,3,4,5};
	vector<int> nums;
	for( int i=0; i<5; i++ )
	{
		nums.push_back(v1[i]);//增加一个元素
	}
	Solution Solution;
	Solution.findPairs(nums,2);

}