/*
cicular Subarray: last element k baad garbage value
nhi ho k pehle element hota h


*/
#include<iostream>
using namespace std;

  int total_sum = 0;
        int curr_max = 0, max_sum = nums[0];
        int curr_min = 0, min_sum = nums[0];

        for (int x : nums) {
            curr_max = max(x, curr_max + x);
            max_sum = max(max_sum, curr_max);
            curr_min = min(x, curr_min + x);
            min_sum = min(min_sum, curr_min);

            total_sum += x;
        }
        if (max_sum < 0) {
            return max_sum;
        }

        return max(max_sum, total_sum - min_sum);
    }

