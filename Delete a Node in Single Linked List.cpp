#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node* deleteNode(Node *head,int x)
{
    if(x==1) return head->next;
    Node* curr=nullptr;
    curr=head;
    int i=1;
    while(curr!=NULL && i<x-1){
        curr=curr->next;
        i++;
    }
    if(curr->next!=NULL)
    curr->next=curr->next->next;
    return head;
}