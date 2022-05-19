
#include <iostream>
#include <vector>   
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
};
int HashFunction(int n, int size) {
    return n % size;
}
bool HashPut(int n, ListNode* l) {
    if (l == nullptr) {
        l = new ListNode;
        l->val = n;
        l->next = nullptr;
    }
    if (l != nullptr) {
        while (l->next != nullptr) {
            if (l->val == n) {
                return true;
            }
            l = l->next;
        }
        l->next = new ListNode;
        l = l->next;
        l->val = n;
        l->next = nullptr;
    }
    return false;

}
bool containsDuplicate(vector<int>& nums) {
    int len = nums.size();
    ListNode* arr = new ListNode[len];
    
    for (int i = 0; i < len; i++) {
        if (HashPut(nums[i], &arr[HashFunction(nums[i], len)])) {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> v = { 7, 5, 16, 8 };
    std::cout << containsDuplicate(v);
}

