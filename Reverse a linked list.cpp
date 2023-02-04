#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        struct Node *pre,*cur,*nex;
        pre=NULL;
        cur=nex=head;
        while(nex!=NULL){
            nex=nex->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
        }
        head=pre;
        return head;
        // return head of reversed list
    }
    
};
    
