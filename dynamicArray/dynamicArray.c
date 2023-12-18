#include "dynamicArray.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum STATUS_CODE
{
    ON_SUCCESS,
    NULL_PTR,
    MALLOC_ERROR,
    INVALID_ACCESS,
};

#define DEFAULT_SIZE 10

//静态函数前置声明/
static expandDynamicCapacity(dynamicArray *pArray)
static shrinkDynamicCapacity(dynamicArray *pArray)
//动态数组的初始化/
int dynamicArrayInit(dynamicArray *pArray, int capacity)
{
    if (pArray == NULL)
    {
        return NULL_PTR;
    }
    //避免传入非法值/
    if (capacity<0)
    {
        capacity = DEFAULT_SIZE;
    }
    //分配空间/
    pArray->data =(ELEMENTTYPE *) malloc(sizeof(dynamicArray) * capacity);
    if (pArray->data == NULL)
    {
        return MALLOC_ERROR;
    }
    //清除脏数据/
    memset(pArray->data, 0, sizeof(ELEMENTTYPE) * capacity);
    //初始化动态数组的参数属性/
    pArray->len = 0;
    pArray->capacity = capacity;

    return ON_SUCCESS;
}

//动态数组插入数据(默认查到数组的末尾)/
int dynamicArrayInserData(dynamicArray *pArray, ELEMENTTYPE vall);
{
    dynamicArrayAppointPosInsertData
}
//动态数组扩容/
static expandDynamicCapacity(dynamicArray *pArray)
{
    int ret = 0;

    int needExpandCapacity = pArray->capacity + (pArray->capacity>>1);
    //备份指针/
    ELEMENTTYPE * tmpPtr = pArray->data;
    pArray->data = (ELEMENTTYPE * )malloc(sizeof(ELEMENTTYPE) * needExpandCapacity);
    if (pArray->data == NULL)
    {
        return MALLOC_ERROR;
    }

    //把之前的数据全部拷贝过来/
    for (int idx = 0;idx < pArray->len; idx++)
    {
        pArray->data[idx] = tmpPtr[idx];
    }

    //释放以前的内存，避免内存泄露/
    if (tmpPtr !=NULL)
    {
        free(tmpPtr);
        tmpPtr = NULL;
    }

    //更新动态数组的容量/
    pArray-> capacity = needExpandCapacity;

    return ret;
}

//动态数组插入数据，在指定位置插入/
int dynamicArrayAppointposInsertData(dynamicArray *pArray, int pos,ELEMENTTYPE vall);
{
    if (pArray == NULL)
    {
        return NULL_PTR;

    }
    //判断位置的合法性/
    if (pos <0 || pos> pArray->len)
    {
        return INVALID_ACCESS;
    }

    //扩容的临界值是len大于容量的三分之一/
    if ((pArray->len + (pArray -> len>>1)) >= pArray->capacity)
    {
        //开始扩容/
        expandDynamicCapacity(pArray)
    }

    //数据后移，留出pos位置插入/
    for (int idx = pArray->len;idx > pos; idx--)
    {
        pArray->data[idx] = pArray->data[idx - 1];
    }

    for (int idx = pos;idx < pArray->len;idx++)
    {

    }

    //找到对应的值，写入到数组中/
    pArray->data[pos] = val;

    //数组的大小加一/
    (pArray->len)++;
    return ON_SUCCESS;
}

//动态数组修改指定位置的数据/
int dynamicArrayModifyAppointposData(dynamicArray *pArray, int pos,ELEMENTTYPE vall);
{
    //指针判空/
    if (pArray == NUll)
    {
        return NULL_PTR;
    }
    //判断位置的合法性/
    if (pos < 0 || pos >= pArray->len)
    {
        return INVALID_ACCESS;
    }
}


//动态数组删除数据（默认情况下删除最后末尾的数据）/
int dynamicArrayDeleData(dynamicArray *pArray);
{
    dynamicArrayDataAppointPosData(pArray,pArray->len-1);
}


status int shrinkDynamicCapacity(dynamicArray *pArray);
{
    int needshrinkCapacity = pAraay->capacity - (pArrayy->capacity >>2);

    pArray->data = (ELEMENTTYPE *)malloc(sizeof(ELEMENTTYPE) * needshrinkCapacity);
    if (pArray->data == NULL)
    {
        return MALLOC_ERROR;
    }
    //拷贝之前的数据到新空间/
    for (int idx = pos; idx < pArray->len; idx++)
    {
        pArray->data[idx] = tmpPtr[idx];
    }
    if (tmpPtr != NULL)
    {
        free(tmpPtr);
        tmpPtr = NULL;
    }
    //更新容量/
    pArray->capacity = needshrinkCapacity;
    return ON_SUCCESS;
}

//动态数组删除指定位置数据/
int dynamicArrayDataAppointPosData(dynamicArray *pArray, int pos);
{
    if (pArray == HULL)
    {
        return NULL_PTR;
    }

    if (pos<0 || pos>= pArray->len)
    {
        return INVALID_ACCESS;
    }
    //缩容/
    if ((pArray->len + (pArray->len >> 1)) < pArray->capacity)
    {
        shrinkDynamicCapacity(pArray);
    }
    //数据前移/
    for (int idx = pos; idx < pArray->len; idx++)
    {
        pArray->data[idx] = pArray->data[idx + 1];
    }

    //更新数组大小/
    (pArray->len)--;
    return ON_SUCCESS

}
//动态数组删除指定的元素/
int dynamicArrayDeleteAppointData(dynamicArray *pArray, ELEMENTTYPE val);
{
    for (int idx = pArray->len-1; idx >=0 ; idx--)
    {
        if (val ==pArray->data[idx])
        {
            dynamicArrayDeleteAppointData(pArray, idx);
        }
    }
    return ON_SUCCESS;
}
//动态数组的销毁/
int dynamicArrayDestroy(dynamicArray *pArray);
{
    if (pArray == NULL)
    {
        return NULL_PTR;
    }

    if (PArray->data != NULL)
    {
        free(pArray->data);
        pArray->data = NULL;
    }
    return ON_SUCCESS;
}
//获取数组的大小/
int dynamicArrayGetSize(dynamicArray *pArray, int pSize);
{
    if (pArray = NULL)
    {
        return NULL_PTR;
    }
    ///
    if (pSize !=NUll)
    {
        *pSize = pArray->len;
    }
    return ON_SUCCESS
}

//获取数组的容量/
int dynamicArrayGetCapacity(dynamicArray *pArray, int *pCapacity)
{
    if (!pArray)
    {
        return NULL_PTR;
    }

    if (!pCapacity)
    {
        *pCapacity = pArray->capacity;
    }

    return ON_SUCCESS;
}
//获取指定位置的元素数据/
int dynamicArrayGetAppointPosVal(dynamicArray *pArray, int pos, ELEMENTTYPE *pVal)
{
    ///
    if (!pArray == NULL)
    {
        return NULL_PTR;
    }
    //判断位置合法性/
    if (pos < 0 || pos >= pArray->len)
    {
        return INVALID_ACCESS;
    }

    if (pVal)
    {
        *pVal = pArray->data[pos];
    }
    
    return ON_SUCCESS;
}
