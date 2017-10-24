//
// Created by houmeng on 17-10-23.
//
#include <cstddef>
#include <iostream>

using std::cout;
using std::endl;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        if (headA == headB) {
            return headA;
        }
        size_t size_a = 0, size_b = 0;
        ListNode *p1 = headA, *p2 = headB;

        while (p1 != NULL) {
            size_a ++;
            p1 = p1->next;
        }
        while (p2 != NULL) {
            size_b ++;
            p2 = p2->next;
        }
        if (size_a > size_b) {
            p1 = headA;
            for (size_t count = 0; count < (size_a - size_b); count++ ) {
                p1 = p1->next;
            }
            p2 = headB;
        } else {
            p1 = headA;
            p2 = headB;
            for (size_t count = 0; count < (size_b - size_a); count ++) {
                p2 = p2->next;
            }
        }

        while (p1 != NULL | p2 != NULL) {
            if (p1 == p2) {
                return p1;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return NULL;
    }
};

int main() {
    ListNode *a1 = new ListNode(1);
    ListNode *a2 = new ListNode(2);
    ListNode *b1 = new ListNode(3);
    ListNode *b2 = new ListNode(4);
    ListNode *b3 = new ListNode(5);
    ListNode *c1 = new ListNode(6);
    ListNode *c2 = new ListNode(7);
    ListNode *c3 = new ListNode(8);

    a1->next = a2;
    a2->next = c1;
    c1->next = c2;
    c2->next = c3;
    b1->next = b2;
    b2->next = b3;
    b3->next = c1;

    ListNode *p1 = a1, *p2 = b1;
    cout << "a" << endl;
    while (p1 != NULL) {
        cout << p1->val << endl;
        p1 = p1->next;
    }
    cout << "b" << endl;
    while (p2 != NULL) {
        cout << p2->val << endl;
        p2 = p2->next;
    }
    cout << "=============" << endl;
    Solution s;
    cout << s.getIntersectionNode(a1, b1)->val << endl;

    return 0;
}