#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
using namespace std;
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
class compare{
    public:
        bool operator()(Node* a,Node* b){
            return a->data > b->data;
        }
};
class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *lists[], int k)
    {
        if(k==0) return NULL;
        priority_queue<Node*,vector<Node*>,compare> minheap;
        Node* head=NULL,*tail=NULL;
        for(int i=0;i<k;i++){
            if(lists[i]!=NULL){
                // ListNode* curr = lists[i];
                minheap.push(lists[i]);
            }
        }
        while(!minheap.empty()){
            Node* node = minheap.top();
            minheap.pop();
            if(head==NULL){
                tail = node;
                head = node;
            }
            else{
                Node* temp = new Node(node->data);
                tail->next = temp;
                tail=tail->next;
            }
            if(node->next != NULL){
                minheap.push(node->next);
            }
        }
        return head;
    }
};
