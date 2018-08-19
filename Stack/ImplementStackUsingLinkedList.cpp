#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node
{
    int data;
    struct Node* next;
};
 
struct Node* newNode(int data)
{
    struct Node* node =
              (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}
 
int isEmpty(struct node *root)
{
    return !root;
}
 
void push(struct node** root, int data)
{
    struct Node* node = newNode(data);
    node->next = *root;
    *root = node;
}
 
int pop(struct Node** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    struct Node* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
 
    return popped;
}
 
int top(struct Node* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}
 
int main()
{
    struct Node* root = NULL;
 
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
 
    printf("%d popped from stack\n", pop(&root));
 
    printf("Top element is %d\n", top(root));
 
    return 0;
}
