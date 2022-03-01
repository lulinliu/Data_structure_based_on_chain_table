#include <stdio.h>
#include <stdlib.h>
typedef struct  LNode *PtrToNode;
typedef int ElementType;

struct LNode{
    ElementType Data;
    PtrToNode Next;
};
typedef PtrToNode Position;
typedef PtrToNode List;

//Initialization
List Initialization(){
    List L;
    L = (List) malloc(sizeof (struct LNode));
    L->Next = NULL;
    return L;
}

//Length -> 链表遍历
int Length(List L){
    List p = L;
    int j = 0;
    while(p!=NULL){
        p = p->Next;
        j++;
    }
    return j;
}
//LOOK UP -> based on the serial number
int FindKth(List L,int k){
    List p = L;
    int j = 1;
    while(p!=NULL&&j<k){
        p = p->Next;
        j++;
    }
    if(j==k){
        return p;
    }
    else return NULL;
}
//LOOK UP -> based on Data
int Find(List L,ElementType X){
    List p = L;
    while(p!=NULL&&p->Data !=X){
        return p;
    }
}
//Insert number -> based on FindKth    or  you can insert based on while loop to find the number;
int Insert(List L,int k,ElementType X){
    List p,s;
    if(k==1){
        s = (List) malloc(sizeof (struct LNode));
        s->Data = X;
        s->Next = L;
        return s;
    }
    p = FindKth(L,k-1);
    if(p==NULL){
        return NULL;
    }
    else{
        s = (List) malloc(sizeof (struct LNode));
        s->Data = X;
        s->Next = p->Next;
        p->Next = s;
        return s;
    }
}
// Delete -> based on serial number
int delete(List L,int i){

}


//delete -> based on Data
int delete_data(List L, ElementType X){

}
int main(){

    return 0;
}
