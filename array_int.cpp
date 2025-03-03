/* WAP to demonstrate Array Declaration and Array Initialization:
using direct method
*/
#include<iostream>
using namespace std;
class ArrayProgram {
    private: int a[5]; //array declaration
    int b[5]={1,2,3,4,5}; //direct initialization of multiple array elements at declaration point
    public: void Display() {
        a[0]=10; //initialization of array element at index 0 using Direct Method
        a[1]=5; //initialization of array element at index 1 using Direct Method
        cout<<"Array Element at Index 0 is "<<a[0]<<endl;
        cout<<"Array Element at Index 1 is "<<a[1]<<endl;
        cout<<"Enter Array Element: ";
        cin>>a[2];
        cout<<"\n Array Element entered by user ";
        cout<<"\n Array Element entered by user ";
    }
};
int main(){
    ArrayProgram obj;
    obj.Display();
    return 0;
}