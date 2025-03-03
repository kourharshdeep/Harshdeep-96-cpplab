/* Program to demonstrate working of Array Initialization using Accept Method */
#include<iostream>
using namespace std;
class program{
    private: int a[10];
    int i;
    public: void accept(){
        int i;
        for(i=0;i<=9;i++){
            cout<<"\n Enter Array Elements: ";
            cin>>a[i];
        }
    }
    public: void display() {
        cout<<"\n Array Elements Entered by the user is: ";
        for(i=0;i<=0;i++){
            
        }
    }
};
int main() {
    program obj;
    obj.accept();
    obj.display();
    return 0;
}