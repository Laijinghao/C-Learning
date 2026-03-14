#include <stdio.h>
#include <stdlib.h>
// 头插法
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node* insertAtHead(struct Node *head,int newData)
// {
//     struct Node *newNode=(struct Node*)malloc(sizeof(struct Node*));
//     newNode->data=newData;
//     newNode->next=head;
//     return newNode;
// }
// void printList(struct Node *head)
// {
//     struct Node *p=head;
//     while(p!=NULL)
//     {
//         printf("%d",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     struct Node *head=NULL;
//     head=insertAtHead(head,30);
//     head=insertAtHead(head,20);
//     head=insertAtHead(head,10);
//     printList(head);
//     return 0;
// }

// 尾插法
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node* insertAtTail(struct Node *head,int newData)
// {
//     struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
//     newNode->data=newData;
//     newNode->next=NULL;
//     if(head==NULL)
//     {
//         return newNode;
//     }
//     struct Node *p=head;
//     while(p->next!=NULL)
//     {
//         p=p->next;
//     }
//     p->next=newNode;
//     return head;
// }
// void printList(struct Node *head)
// {
//     struct Node *p=head;
//     while(p!=NULL)
//     {
//         printf("%d",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     struct Node *head=NULL;
//     head=insertAtTail(head,10);
//     head=insertAtTail(head,20); 
//     head=insertAtTail(head,30);
//     printList(head);
//     return 0;
// }


//尾插法+链表删除
struct Node
{
    int data;
    struct Node* next;
};
struct Node* insertAtTail(struct Node *head,int newData)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=newData;
    newNode->next=NULL;
    if(head==NULL)
    {
        return head;
    }
    struct Node *p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=newNode;
    return head;
}

struct Node* deleteNode(struct Node *head,int newData)
{
    struct Node *p=head;
    struct Node *prev=NULL;
    if(p!=NULL &&p->data!=newData)
    {
        prev=p;
        p=p->next;
    }
    if(p->next=NULL)
    {
        printf("没找到\n");
        return head;
    }
    if(prev==NULL)
    {
        head=p->next;
    }
    else
    {
        prev->next=p->next;
    }
    free(p);
    return head;
}
void printList(struct Node* head)
{
    struct Node *p=head;
    while(p!=NULL)
    {
        printf("%d",p->data);
    p=p->next;    
    }
    printf("\n");
}
int main() {
    struct Node *head = NULL;
    head = insertAtTail(head, 10);
    head = insertAtTail(head, 20);
    head = insertAtTail(head, 30);
    printf("原链表: ");
    printList(head);

    head = deleteNode(head, 20);
    printf("删除20后: ");
    printList(head);

    head = deleteNode(head, 10);
    printf("删除10后: ");
    printList(head);

    head = deleteNode(head, 40);  
    return 0;
}