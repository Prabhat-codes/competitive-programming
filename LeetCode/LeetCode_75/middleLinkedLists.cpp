#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *middleNode(ListNode *head)
{
    int n = 0;
    ListNode *curr = head;
    while (curr->next != 0)
    {
        n++;
        curr = curr->next;
    }
    n+=1;
    n=n/2+1;
    curr=head;
    while(n!=0){
        curr=curr->next;
        n--;
    }
    return curr;

}

int main()
{

    return 0;
}