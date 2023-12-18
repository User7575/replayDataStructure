#include "dynamicArray"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum STATUS_CODE
{
    ON_SUCCESS
    NULL_PTR
};

#define DEFAULT_SIZE 10


//动态数组的初始化/
int dynamicArrayInit(dynamicArray *pArray, int capacity);
{
    if (pArray == NUll)
    {
        return NULL_PTR;
    }
    if (capacity<0)
    {
        capacity = DEFAULT_SIZE;
    }

    pArray->data =(ELEMENTTYPE *) malloc(sizeof(dynamicArray) * capacity);
    if (pArray->data == NULL)
    {
        return MALLOC_ERROR;
    }
    memset(pArray->data, 0, sizeof(ELEMENTTYPE) * capacity);

    pArray->len = 0;
    pArray->capacity = capacity;

    return ON_SUCCESS;
}

//动态数组插入数据(默认查到数组的末尾)/
int dynamicArrayInserData(dynamicArray *pArray, ELEMENTTYPE vall);

//动态数组插入数据，在指定位置插入/
int dynamicArrayAppointposInsertData(dynamicArray *pArray, int pos,ELEMENTTYPE vall);

//动态数组修改位置指定位置的数据/
int dynamicArrayModifyAppointposData(dynamicArray *pArray, int pos,ELEMENTTYPE vall);

//动态数组删除数据（默认情况下删除最后末尾的数据）/
int dynamicArrayDeleData(dynamicArray *pArray);

//动态数组删除指定位置数据/
int dynamicArrayDataAppointPosData(dynamicArray *pArray, int pos);

//动态数组删除指定的元素/
int dynamicArrayDeleData(dynamicArray *pArray, ELEMENTTYPE val);

//动态数组的销毁/
int dynamicArrayDestroy(dynamicArray *pArray);

//获取数组的大小/
int dynamicArrayGetSize(dynamicArray *pArray, int pSize);

//获取数组的容量/
int dynamicArrayGetCapacity(dynamicArray *pArray, int pCapacity);