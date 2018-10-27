#include<stdio.h>

// typedef struct {
//     int *array;
//     int size;
// }Array;

Array array_creat (int init_size){
    Array a;
    a.size=init_size;
    a.array=(int*)malloc(sizeof(int)*a.size);
    return a;
}
void array_free(Array *a){
    free(a->array);
    a->array=NULL;
    a->size=0
}
//封装
int array_size(const Array *a){
    return a->size;
}
//返回指针
int *array_at(Array *a,int index){
    return &(a->array[index]);
}
void array_inflate(Array *a,int more_size);

int main(){
    Array a=array_creat(100);
    *array_at(&a,0)=10;

    array_free(&a);
}
