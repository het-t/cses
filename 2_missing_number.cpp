#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
    int length;

    cin >> length;

    int nums[length];

    for (int i = 0; i!=length-1; i++) {
        cin >> nums[i];
    }

    sort(nums, nums+length-1);

    int i;
    for(i=0; i!=length-1; i++) {
        if (nums[i]!=i+1) {
            break;
        }
    }

    cout << i+1;

    return 0;
}