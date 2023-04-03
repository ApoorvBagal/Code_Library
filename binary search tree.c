#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
typedef struct node *NODE;
NODE root=NULL;

NODE insert(NODE root,int item)
{
    NODE newnode;
    newnode=(NODE*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory not allocated\n");
        return root;
    }
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        printf("root created\n");
        root=newnode;
        return root;
    }
    NODE cur,prev;
    cur=root;
    prev=NULL;
    while(cur!=NULL)
    {
        prev=cur;
        if(newnode->data>cur->data)
        {
            cur=cur->right;
        }
        else
        {
            cur=cur->left;
        }
    }
    if(newnode->data < prev->data)
    {
        prev->left=newnode;
    }
    else
    {
        prev->right=newnode;
    }
    return root;
}
void inorder(NODE root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void preorder(NODE root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    else
    {
        printf("tree empty\n");
    }
}
void postorder(NODE root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        postorder(root->right);
        postorder(root->left);
    }
}
void count_greater_than(NODE root)
{
    int k;
    printf("Enter the element:\n");
    scanf("%d",&k);
    int count=0;
    if(root!=NULL)
    {
        inorder(root->left);
        if(root->data>k)
        {
            count++;
        }
        inorder(root->right);
    }
    printf("%d",count);
}
void degree(NODE root)
{
    int count=0,flag=0;
    if(root->left!=NULL && root->right!=NULL)
    {
        count=2;
    }
    else if(root->right!=NULL && root->left==NULL)
    {
        count=1;
    }
    else if(root->left!=NULL && root->right==NULL)
    {
        count=1;
    }
    else
    {
        count=0;
    }
    printf("degree of root:%d\n",count);
}
NODE delete_from_bst(NODE root)
{
    int item;
    if(root==NULL)
    {
        printf("Tree empty\n");
        return root;
    }
    printf("Enter item to be deleted\n");
    scanf("%d",&item);
    NODE cur,parent,p,succ;
    cur=root;
    parent=NULL;
    while(cur!=NULL && cur->data!=item)
    {
        parent=cur;
        if(item < cur->data)
        {
            cur=cur->left;
        }
        else
        {
            cur=cur->right;
        }
    }
    if(cur==NULL)
    {
        printf("Item not found\n");
        return root;
    }
    if(cur->left==NULL)
    {
        p=cur->right;
    }
    else if(cur->right==NULL)
    {
        p=cur->left;
    }
    else
    {
        succ=cur->right;
        while(succ->left!=NULL)
        {
            succ=succ->left;
        }
        succ->left=cur->left;
    }
    if(parent==NULL)
    {
        free(cur);
        return p;
    }
    if(cur==parent->left)
    {
        parent->left=p;
    }
    else
    {
        parent->right=p;
    }
}
NODE delete_less_than(NODE root)
{
    int item;
    if(root==NULL)
    {
        printf("Tree empty\n");
        return root;
    }
    printf("Enter the value k:\n");
    scanf("%d",&item);
    NODE cur,parent,p,succ;
    cur=root;
    parent=NULL;
    while(cur!=NULL && cur->data>item)
    {
        parent=cur;
        if(item < cur->data)
        {
            cur=cur->left;
        }
        else
        {
            cur=cur->right;
        }
    }
    if(cur==NULL)
    {
        printf("Item not found\n");
        return root;
    }
    if(cur->left==NULL)
    {
        p=cur->right;
    }
    else if(cur->right==NULL)
    {
        p=cur->left;
    }
    else
    {
        succ=cur->right;
        while(succ->left!=NULL)
        {
            succ=succ->left;
        }
        succ->left=cur->left;
    }
    if(parent==NULL)
    {
        free(cur);
        return p;
    }
    if(cur==parent->left)
    {
        parent->left=p;
    }
    else
    {
        parent->right=p;
    }
}
int max(NODE root)
{
    int res=0;
    res = root->data;
    int lres = max(root->left);
    int rres = max(root->right);
    if (lres > res)
        res = lres;
    if (rres > res)
        res = rres;
    printf("%d",res);
}
void edges_to_max(NODE root,int res)
{
    NODE cur;
    cur=root;
    int c=0;                    //count//
    while(cur->data!=res)
    {
        if(cur->data > res)
        {
            cur=cur->left;
            c++;
        }
        else
        {
            cur=cur->right;
            c++;
        }
    }
    printf("edges to max:%d",c);
}
int comparisons(NODE root)
{

}
int findmin(NODE root)
{
    int result = root->data;
    int lres = findmin(root->left);
    int rres = findmin(root->right);
    if (lres < result)
    {
      result = lres;
    }
    if (rres < result)
    {
      result = rres;
      return result;
    }
}
NODE ROOT(NODE root)
{
    printf("address of root:%d",root);
}
int main()
{
    int ch;
    int item;
    printf("Enter 1.To insert 2.To delete 3.To display 4.To find degree 6.To find max\n");
    while(1)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter data\n");
                   scanf("%d",&item);
                   root=insert(root,item);
                   break;
            case 2:delete_from_bst(root);
                   break;
            case 3:preorder(root);
                   break;
            case 4:degree(root);
                   break;
            case 6:max(root);
                   break;
            //case 7:edges_to_max(root,res);
                  // break;
            case 5:exit(0);
                   break;
        }
    }
}
