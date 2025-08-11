#include<iostream>
using namespace std;
class MaxHeap{
    public:
        int arr[50];
        int idx;
        MaxHeap(){
            idx = 1;
        }
        int top(){
            return arr[1];
        }
        int size(){
            return idx - 1;
        }
        void push(int x){
            arr[idx] = x;
            int i = idx;
            idx++;
            while( i!= 1){
                int parent = i/2;
                if(arr[i]>arr[parent]){
                    swap(arr[i], arr[parent]);
                    i = parent;
                }else{
                    break;
                }
            }
        }
        void pop(){
            idx--;
            arr[1] = arr[idx];
            // rearrange
            int i = 1;
            while(true){
                int left  = 2*i;
                int right = 2*i+1;
                if(left>idx-1) break;
                if(right>idx-1){
                    if(arr[i]<arr[left]){
                        swap(arr[i], arr[left]);
                    }
                    break;
                }
                if(arr[left]>arr[right]){
                    if(arr[i]<arr[left]){
                        swap(arr[left],arr[i]);
                        i = left;
                    }
                    else{
                        break;
                    }
                }
                if(arr[i]<arr[right]){
                    swap(arr[i], arr[right]);
                    i = right;
                }else{
                    break;
                }
            }
        }
        void display(){
            for(int i = 1; i<idx; i++){
                cout<<arr[i]<<" ";
            }
        }
};
int main(){
    MaxHeap mh;
    mh.push(10);
    mh.push(20);
    cout<<mh.top()<<" "<<mh.size()<<endl;
    mh.push(5);
    mh.push(30);
    cout<<mh.top()<<" "<<mh.size()<<endl;
    mh.pop();
    cout<<mh.top()<<" "<<mh.size()<<endl;
    mh.display();


    return 0;
}