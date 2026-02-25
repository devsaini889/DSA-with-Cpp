// Leetcode Problem --> https://leetcode.com/problems/sort-colors/?envType=problem-list-v2&envId=array

// 75 --> sort colors 

#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
        int l = 0, m=0, h = nums.size()-1;
        while(m<=h){
            if(nums[m] == 0){
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m] == 1){
                m++;
            }
            else{
                swap(nums[m], nums[h]);
                h--;
            }
        }
    }

int main()
{
    vector<int> arr{2,0,2,1,1,0};
    sortColors(arr);
    for(auto val : arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
 return 0;
}


