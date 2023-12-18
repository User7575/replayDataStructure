#ifndef __DYNAMIC_ARRAY_H_
#define __DYNAMIC_ARRAY_H_

typedef int ELEMENTTYPE;

//避免头文件重复包含/
typedef struct dynamicArray
{
    ELEMENTTYPE *data;          //数组的空间/
    int len;                    //数组的大小/
    int capacity;               //数组的容量/
}dynamicArray;

//API: application program interface./

//动态数组的初始化/
int dynamicArrayInit(dynamicArray *pArray);

//动态数组插入数据(默认查到数组的末尾)/
int dynamicArrayInserData(dynamicArray *pArray, ELEMENTTYPE vall);

//动态数组插入数据，在指定位置插入/
int dynamicArrayAppointposInsertData(dynamicArray *pArray, int pos,ELEMENTTYPE vall);

//动态数组修改位置指定位置的数据/
int dynamicArrayAppointposInsertData(dynamicArray *pArray, int pos,ELEMENTTYPE vall);

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

#endif