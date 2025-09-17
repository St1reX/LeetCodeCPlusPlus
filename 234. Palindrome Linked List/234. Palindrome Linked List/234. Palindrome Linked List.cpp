// 234. Palindrome Linked List.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
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
    bool isPalindrome(ListNode* head) {
        bool x = 1;
        if (head == nullptr || head->next == nullptr)
        {
            return x;
        }
        vector<int> Palindrome;
        while (head != nullptr)
        {
            Palindrome.push_back(head->val);
            head = head->next;
        }

        for (int i = 0, j = (Palindrome.size() - 1); i < (Palindrome.size() / 2); i++, j--)
        {
            if (Palindrome[i] != Palindrome[j])
            {
                x = false;
                break;
            }
                
        }
        return x;
    }
};

int main()
{
	
}

