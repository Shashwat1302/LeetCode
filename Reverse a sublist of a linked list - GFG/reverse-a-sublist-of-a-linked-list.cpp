// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


 // } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    int count=1;
    private:
       Node *subListAll(Node *head,int m){
           if(m==1){
               return head;
           }
           return subListAll(head->next,m-1);
       }
       Node *reverse(Node *head){
           if(head==NULL||head->next==NULL){
               return head;
           }
           Node *revHead=reverse(head->next);
           head->next->next=head;
           head->next=NULL;
           return revHead;
       }
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        Node *revHead=subListAll(head,m);
       Node *revTail=subListAll(head,n);
       Node *list2=revTail->next;
       revTail->next=NULL;
       if(head==revHead){
           revHead=reverse(revHead);
           head->next=list2;
           return revHead;
       }else{
           Node *temp=head;
           while(temp->next!=revHead){
               temp=temp->next;
           }
           Node *revAfter=revHead;
           temp->next=reverse(revHead);
           revAfter->next=list2;
       }
       return head;
    }
};

// { Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
  // } Driver Code Ends