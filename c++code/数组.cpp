#include<iostream>
using namespace std;
#define DEFAULT_CAPACITY 10

class Array{
private:
    int *_elems;
    int _capacity;
    int _size;

private:
    void copyFrom(int const *A,int low, int high)
    {
        _size = high + 1 - low;
        for(int i = 0; i < _size; i++)
        {
            _elems[i] = A[low + i];

        }
    }
    void expand()
    {
        _capacity=_capacity * 2;
        int *oldElema = _elems;
        _elems = new int[_capacity];
        for(int i = 0;i < _size;i++)
            _elems[i] = oldElema[i];
    }
    delete[] oldElems;
}
    void shrink()
    {
        _capacity /= 2;
        int *oldElems = _elems;
        _elems = new int[_capacity];
        for (int i = 0;i < _size;i++)
        _elems[i] = oldElems[i];  
    }
    delete[] oldElems;
}

void exchange(int a, int b){
    int temp = _elems[a];
    _elems[a] = _elems[b];
    _elems[b] = temp;
}
int find(int e , int low, int high) const {
    if(high > _size -1){
        high = size - 1;
    }
    for(int i = low; i < high;i++)
        if(_elems[i] == e)
        {
            return i;
        }
    }
    return -1;
}

}


}






};