#ifndef __LINKLIST_H_
#define __LINKLIST_H_

#define ELEMENTTYPE int 

//链表结点取别名/ 
typedef struct LinkNode
{
    ELEMENTTYPE data;
    //指向下一个节点的指针/ 
    struct LinkNode *next;        //指针的类型为什么是节点/
} LinkNode;

//链表/
typedef struct LinkList
{
    //链表的虚拟头结点/
    LinkNode * head;

    //链表的长度/
    int len;
}LinkList;

//链表初始化/
int LinkListInit ();

//链表头插/
int LinkListheadInsert ();

//链表尾插/
int LinkListTailTnsert ();

//链表指定位置插入/
int LinkListAppointPosInsert ();

//链表头删/
int LinkListHeadDel ();

//链表尾删/
int LinkListTaiDel ();

//链表指定位置删/
int LinkListAppointPos ();

//链表删除指定位置/
int LinkListAppointDataDel ();

//获取链表的长度/
int LinkListGetLength ();

//链表的销毁/
int LinkListDestrov ();



