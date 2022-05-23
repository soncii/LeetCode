#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int M = m - 1, N = n - 1;
    for (int i = m + n - 1; i >= 0; i--) {
        if (N < 0) {
            break;
        }
        if (M < 0) {
            nums1[i] = nums2[N];
            N--;
            continue;
        }
        if (nums1[M] > nums2[N]) {
            nums1[i] = nums1[M];
            M--;
        }
        else {
            nums1[i] = nums2[N];
            N--;
        }
    }
}
int main(){
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums2.push_back(2);
    nums2.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    merge(nums1, 1, nums2, 2);
    for (int i=0; i<3; i++) {
        cout<<nums1[i];
    }

}