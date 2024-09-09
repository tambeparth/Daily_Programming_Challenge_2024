#include <iostream>
#include <vector>
using namespace std;
void dnf(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}
int main()
{

    vector<int> nums = {0, 1, 2, 2, 0, 0, 1, 1, 2};
    dnf(nums);
    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}