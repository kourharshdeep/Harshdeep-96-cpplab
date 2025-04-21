/* Program to demonstrate working of passing objects as parameter to function using different methods
1. Pass by value
2. Pass by Reference
3. Pass by Pointer
4. Pass by const Reference (generates read-only reference)
*/
#include<iostream>
using namespace std;
class Program{
    public: int a=1;
    public: void display() {
        cout<<"\n Value of 'a' in class: "<<a;
    }
};
void method1(Program obj1){ //Pass by Value (create separate copy a 'a')
    obj1.a=3; //any change inside this function will not modify original value
    cout<<"\n Value of 'a' in method1: "<<obj1.a;
}
void method2(Program &obj){ //Pass by Reference
    obj.a=3;
    cout<<"\n Value of 'a' in method2: "<<obj.a;
}
void method3(Program *pobj){ //Pass by Pointer
    pobj->a=4; //pointer will change original value
    cout<<"\n Value of 'a' in method3: "<<pobj->a;
}
void method4(Program obj2) { //Pass by Const Reference
    obj2.a=5; //any change inside this function will not modify original value
    cout<<"\n Value of 'a' in method4: "<<obj2.a;
}
int main() {
    Program obj;
    obj.display();
    method1(obj); //pass by value
    obj.display();
    method2(obj); //pass by reference
    obj.display();
    method3(&obj); //pass by pointer
    obj.display();
    method4(obj);
    return 0;
}