#include <cstddef>
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next, *prev;

    Node(int);
};

Node::Node(int n){
    data = n;
    next = prev = NULL;
}

class linkedlist{
    private:
        Node *head;
        Node *tail;
    
    public:
        linkedlist()
        {
            head = tail = NULL;
        }

        void retryHead()
        {
            while(head->prev != NULL)
            {
                head = head->prev;
            }
        }
        void insertAtTail(int n)
        {
            Node *tmp = new Node(n);

            if(tail == NULL)
            {
                head = tail = tmp;
            }
            else
            {
                tail->next = tmp;
                tmp->prev = tail;
                tail = tmp;
            }
            
        }

        void insertAtHead(int n)
        {
            Node *tmp = new Node(n);
            if(head == NULL)
            {
                head = tail = NULL;
            }
            else
            {
                head->prev = tmp;
                tmp->next = head;
                head = tmp;
            }
            retryHead();
        }

        void print()
        {
            Node *h = head;

            while(h != NULL)
            {
                cout<<h->data<<" ";
                h = h->next;
            }
            retryHead();
        }
        void find(int n)
        {
            Node *h = head;
            while(h != NULL)
            {
                if(h->data == n)
                {
                    cout<<"FOUND!"<<endl;
                    retryHead();
                    return;
                }
                h = h->next;
            }
            retryHead();
            cout<<"Not Found!"<<endl;
        }

        void deleteNode(int n)
        {
           if(head->data == n)
           {
               head = head->next;
               head->prev = NULL;
               return;
           }
           while(head != NULL)
           {
               if(head->data == n && head->next == NULL)
               {
                   head = head->prev;
                   head->next = NULL;
                   retryHead();
                   return;
               }
               if(head->data == n)
               {
                   head = head->prev;
                   head->next = head->next->next;
                   if(head->next->next != NULL)
                   {
                       head = head->next->next;
                       head->prev = head->prev->prev;
                   }
                   retryHead();
                   return;
               }
               head = head->next;
               
           }
            
            cout<<"Not Found!"<<endl;
        }
 
               
};
int main()
{
    linkedlist ll;
    
    ll.insertAtTail(1);

    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtHead(4);
    ll.insertAtHead(0);
    ll.print();

    int findN = 5;
   // ll.find(findN);
    cout<<endl;
    ll.deleteNode(3);
    ll.deleteNode(2);
    ll.print();
    return 0;
}
