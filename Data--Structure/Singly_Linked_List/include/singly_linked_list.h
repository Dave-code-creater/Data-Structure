/* array.h */

#ifndef MY_HEADER_H__
#define MY_HEADER_H__

typedef struct Node 
{
    int value;
    struct Node *next;
} Node;

typedef struct Singly_linked_list
{
    Node Head;
};

extern int* Create_Singly_Linked_List(int* Singly_linked_list);

#endif