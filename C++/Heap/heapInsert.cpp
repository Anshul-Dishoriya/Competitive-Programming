#include <bits/stdc++.h>
using namespace std;

class minheap{
    public:
        int *arr;
        int size;
        int capacity;
    
        minheap(int c){
            capacity=c;
            size=0;
            arr =new int[c];
        }
        //fucntion to get left child
        int left(int i) { return (2*i+1); }
        //function to get right child
        int right(int i) { return (2*i+2); }
        //fucntion to get parent
        int parent(int i) {return (i-1)/2;}

        void insert(int x){
            if (size==capacity) return ;
            size++;
            arr[size-1] = x;
            for (int i = size-1; i!=0 && arr[parent(i)>arr[i]]; ++i)
            {
                swap( arr[i] , arr[parent(i)]);
                i = parent(i);
            }
        }

        
};
int main(int argc, char const *argv[])
{
    minheap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(20);
   
    
    return 0;

    
}