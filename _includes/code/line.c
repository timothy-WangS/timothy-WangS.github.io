#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


typedef struct node
{
    int member;                
    struct node *pNext;        
}Node,*pNode;        



pNode CreateList()
{
    int i;                                          
    int len;                                        
    int val;                                        
    pNode pHead = (pNode)malloc(sizeof(Node));     
    pNode pTail = pHead;                           
    pTail->pNext = NULL;                            
    printf("请输入节点个数：");
    scanf("%d",&len);
    for(i = 0; i < len; i++)
    {
        printf("第 %d 个节点的数值：",i+1);
        scanf("%d",&val);
        pNode pNew = (pNode)malloc(sizeof(Node));   
        pNew->member = val;                         
        pTail->pNext = pNew;                        
        pNew->pNext = NULL;                         
        pTail = pNew;                               
    }
    return pHead;                                   

}




void TraverseList(pNode pHead)
{
    pNode p = pHead->pNext;                         
    while(NULL != p)                                
    {
         printf("%d ",p->member);                    
         p = p->pNext;                                
    }
    printf("\n");
    return ;
}




int main()
{
    pNode pHead = NULL;         
    pHead = CreateList();       
    TraverseList(pHead);        
    return 0;
}


