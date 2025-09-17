// 2. Add Two Numbers.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int k = 0;
        int j = 0;
        ListNode *first = l1;
        while (l1 != nullptr && l2!=nullptr)
        {

            j = (l1->val + l2->val + k) / 10;
            
            if ((l1->next == nullptr && (l1->val + l2->val + k) >= 10) || (l2->next != nullptr && l1->next==nullptr))
            {
                ListNode* j1 = new ListNode(0);
                l1->next = j1;
            }
            if (l2->next == nullptr && (l1->val + l2->val + k) >= 10)
            {
                ListNode* j2 = new ListNode(0);
                l2->next = j2;
            }

            l1->val = (l1->val + l2->val + k) % 10;
            k = j;

            if (l1 != nullptr) {
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                l2 = l2->next;
            }
        }
        return first;
    }
};

int main()
{
    ListNode l1(2);
    ListNode l2(4);
    ListNode l3(3);

    l1.next = &l2;
    l2.next = &l3;

    ListNode s1(5);
    ListNode s2(6);
    ListNode s3(4);

    s1.next = &s2;
    s2.next = &s3;

    Solution x1;

    x1.addTwoNumbers(&l1, &s1);
}