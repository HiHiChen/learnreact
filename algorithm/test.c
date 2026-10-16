#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    /* data */
    int val;
    struct ListNode *next;
    struct ListNode *prev;

} ListNode;

ListNode *newListNode(int val)
{

    ListNode *node;
    node = (ListNode *)malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    node->prev = NULL;

    // 初始化链表
    ListNode *n0 = newListNode(1);
    ListNode *n1 = newListNode(3);
    ListNode *n2 = newListNode(2);
    ListNode *n3 = newListNode(5);
    ListNode *n4 = newListNode(4);

    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    n1->prev = n0;
    n2->prev = n1;
    n3->prev = n2;
    n4->prev = n3;

    // 环形链表则为
    // n4->next = n0;
    // n0->prev = n4;
    return node;
}

// 插入节点
void inset(ListNode *n0, ListNode *P)
{
    ListNode *n1 = n0->next;
    P->next = n1;
    n0->next = P;
}

// 删除节点
void removeId(ListNode *n0, ListNode *P)
{
    ListNode *p = n0->next;
    ListNode *n1 = P->next;
    n0->next = n1;
    free(P);
}

// 访问节点
ListNode *access(ListNode *head, int index)
{
    for (int i = 0; i < index; i++)
    {
        /* code */
        if (head == NULL)
            return NULL;
        head = head->next;
    }
    return head;
}

// 查找节点
int find(ListNode *head, int target)
{
    int index = 0;
    while (head)
    {
        /* code */
        if (head->val == target)
            return index;
        head = head->next;
        index++;
    }
    return -1;
}