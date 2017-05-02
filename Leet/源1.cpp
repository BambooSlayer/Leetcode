#include <stdio.h>  
#include "iostream"
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int Len=nums.size();///sizeof(int);
		//for(i=0;i<Len;i++){
		if(target>nums[Len-1]){return Len;}//这里不能打成》=，会出错：【1】 1
		if(target<=nums[0]){return 0;}
		int Up=Len-1;
		int Down=0;
		int Mid;
		while(Up-Down>1){
			Mid=(Up+Down)/2;
			if(nums[Mid]==target){return Mid;}
			else if(nums[Mid]>target){ Up=Mid; }
			else{Down=Mid;}
			
			//if(nums[i]/target)
		}
		if(nums[Down]==target){return Down;}
		else {return Up;}
    }

};
int main()
{
	Solution A;
	int arr[]={1,3,5,7,90};
	vector<int> NM(arr,arr+5);
	printf("%d",A.searchInsert(NM,6));
	return 1;
}