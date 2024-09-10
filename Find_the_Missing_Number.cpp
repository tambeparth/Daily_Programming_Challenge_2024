#include <iostream>
#include <vector>
using namespace std;
int findMissingNumbers(const vector<int> &arr)
{
    int n = arr.size() + 1;
    int expectedSum = (n * (n + 1)) / 2;

    int actualSum = 0;
    for (int num : arr)
    {
        actualSum += num;
    }
    return (expectedSum - actualSum);
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 5};
    cout << "Missing Number:" << findMissingNumbers(arr1) << endl;

    vector<int> largeArr(999999);
    for (int i = 0; i < 999999; i++)
    {
        largeArr[i] = i + 1;
    }
    cout << "Missing Large Number:" << findMissingNumbers(largeArr) << endl;
    return 0;
}