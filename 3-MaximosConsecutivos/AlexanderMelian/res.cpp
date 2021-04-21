#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int nSize = nums.size();
        if (nSize == 0){
            return 0;
        }
        if (nSize == 1){
            if(k>0 || nums[0] == 1){
                return 1;
            }
            return 0;
        }
        int res = 0, i, j;
        for(i = 0,j = 0; i < nSize; i++){
            if(nums[i] == 0){
                k--;
            }
            if(k == -1){
                if(res<i-j){
                res = i-j;
                }
                while(j<i && nums[j] == 1){
                    j++;
                }
                j++;
                k++;
            }
        }
        if(res<i-j){
            res = i-j;
        }
        
        return res;
    
    }
};

int main(){
    vector<int> param;
    int help[] = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int lenHelp = sizeof(help)/sizeof(help[0]);
    int k = 3;
    for (int i = 0; i < lenHelp; i++){
        param.push_back(help[i]);
    }
    Solution mysolution;
    cout << "Solution is: " << mysolution.longestOnes(param,k) << "  Correct is :" << 10 << endl;
    
    int help2[] = {1,1,1,0,0,0,1,1,1,1,0};
    int lenHelp2 = sizeof(help2)/sizeof(help2[0]);
    k = 2;
    param.clear();
    for (int i = 0; i < lenHelp2; i++){
        param.push_back(help2[i]);
    }
    cout << "Solution is: " << mysolution.longestOnes(param,k) << "  Correct is :" << 6 << endl;

    int help3[] = {1,0,1,1,1,0,1,1};
    int lenHelp3 = sizeof(help3)/sizeof(help3[0]);
    k = 0;
    param.clear();
    for (int i = 0; i < lenHelp3; i++){
        param.push_back(help3[i]);
    }
    cout << "Solution is: " << mysolution.longestOnes(param,k) << "  Correct is :" << 3 << endl;
    
    int help4[] = {0, 1, 1, 1};
    int lenHelp4 = sizeof(help4)/sizeof(help4[0]);
    k = 3;
    param.clear();
    for (int i = 0; i < lenHelp4; i++){
        param.push_back(help4[i]);
    }
    cout << "Solution is: " << mysolution.longestOnes(param,k) << "  Correct is :" << 4 << endl;

    int help5[] = {1, 0, 1, 0, 1, 1, 1, 1};
    int lenHelp5 = sizeof(help5)/sizeof(help5[0]);
    k = 1;
    param.clear();
    for (int i = 0; i < lenHelp5; i++){
        param.push_back(help5[i]);
    }
    cout << "Solution is: " << mysolution.longestOnes(param,k) << "  Correct is :" << 6 << endl;

    
    cout << endl;

    
    return 0;
}