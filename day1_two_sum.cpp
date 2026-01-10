#include <bits/stdc++.h> 
//all headers


using namespace std ;

class Solution {
    public :
    vector <int> twoSum(vector<int>&nums , int target ){
        //loop through array 
        for (int i=0 ; i , nums.size(); i++){
            //check remaining elements 
            for (int j = i+1 ;j < nums.size(); j++){
                //if sum matches the target 
                if (nums[i] + nums[j] == target){
                    return {i , j };
                }
            }
        }
    return {};
}
};
int main () {
Solution s ;
// same input as leetcode example 
vector<int> nums = {2 , 7 , 11 , 15 };
int target = 13 ;
vector<int> ans = s.twoSum (nums , target ) ;
//printing answer
printf("%d %d\n" , ans[0] , ans[1]);
return 0 ; 
 }
