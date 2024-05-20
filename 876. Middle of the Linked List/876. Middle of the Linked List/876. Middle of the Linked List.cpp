// 876. Middle of the Linked List.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};

void test(ListNode* head)
{
    while (head != nullptr)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

class Solution {
public:
   ListNode* middleNode(ListNode* head) {
        float counter = 0;
        ListNode* helper = head;

        while (helper != nullptr)
        {
            counter++;
            helper = helper->next;
        }

        if (floor((counter / 2)) == (counter / 2))
        {
            counter = counter / 2 + 1;
            for (counter; counter > 1; counter--) 
            {
                head = head->next;
            }
        }
        else
        {
            counter /= 2;
            counter = ceil(counter);
            for (counter; counter > 1; counter--)
            {
                head = head->next;
            }
        } 
        return head;
    }
};

int main()
{
    ListNode l1(1);
    ListNode l2(2);
    ListNode l3(3);
    ListNode l4(4);
    ListNode l5(5);
    ListNode l6(6);

    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;
    l4.next = &l5; 
    l5.next = &l6;

    Solution s1;
    cout << s1.middleNode(&l1); 

    

    

}

