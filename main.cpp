#include <iostream>
//#inlude<array>
using namespace std;

int max(int a,int b,int c,int i){
    if(a>b){
        if(a>c)
            return i-1;
        else
            return i+1;
    }
    else{
        if(b>c)
            return i;
        else
            return i+1;
    }
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reArrange(int arr[],int n){
    for(int i = 1; i < n; i=i+2){
        int valid = (i+1) > (n-1)?0:arr[i+1];
        int pos = max(arr[i-1],arr[i],valid,i);
        swap(arr[i],arr[pos]);
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    reArrange(arr,n);
    return 0;
}
