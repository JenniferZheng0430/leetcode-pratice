#include <iostream>
#include <array>
#include <string.h>
#include <vector>

using namespace std;

int maxSubArray(int nums[],int size) {
  int globalMax = nums[0];
  int curMax = nums[0];

  for (int i = 1;i < size;i++){
    curMax = max(curMax + nums[i],nums[i]);
    globalMax = max(curMax,globalMax);
  }

  return globalMax;
}

int main(){
// cout << "Hello world";
int nums[] = {1,2,-1,-2,10};
int n = sizeof(nums)/sizeof(nums[0]);
cout << maxSubArray(nums,n);
}
