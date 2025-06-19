#include iostream
#include unordered_map
using namespace std;

 Function to find two indices whose elements sum to target
pairint, int twoSum(int arr[], int n, int target) {
    unordered_mapint, int m;
    for (int i = 0; i  n; ++i) {
        int complement = target - arr[i];
        if (m.find(complement) != m.end()) {
            return {m[complement], i};
        }
        m[arr[i]] = i;
    }
    return {-1, -1};  Not found
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr)  sizeof(arr[0]);
    pairint, int result = twoSum(arr, n, target);
    if (result.first != -1)
        cout  Indices   result.first   and   result.second  endl;
    else
        cout  No valid pair found.n;
    return 0;
}
