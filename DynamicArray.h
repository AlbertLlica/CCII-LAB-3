#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

class DynamicArray {
        int size;  
        int *arr;
    public:
        DynamicArray();
        DynamicArray(const int* ptr, int size);
        DynamicArray(const DynamicArray &o);

        void push_back(int elem); 

        void insert(int elem, int pos);
        void remove(int pos);


        int getSize() const {
            return size;
        }
        void print() const;

        ~DynamicArray();
};

#endif