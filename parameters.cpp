#include<iostream>
using namespace std;
class program1 {
    private: int pin;
    public: int validate() { //function with return type and no parameter
        cout<<"Enter your pin: ";
        cin>>pin;
        if(pin==1234) {
            return 1;
        }
        else {
            return 0;
        }
    }
    void Display_Balance(int amount){ //function with a parameter and no return type
    //amount is a formal parameter
    //parameter defined at function definition
        cout<<"Your balance is:"<<amount<<" !!!";
    }

    public: void Fun(){ //function with no return type and no parameter
        cout<<"Hi"<<endl;
    }
    //function with parameter and return type
};
int main() {
    program1 obj;
    int res;
    int amt=10000;
    obj.Fun();
    res= obj.validate();
    if(res==1){
        cout<<"\n Authentication Successful!!!"<<endl;
        obj.Display_Balance(amt); //amt is actual parameter(defined at function calling)
    } 
    else{
        cout<<"\n Authentication failed!!!";
    }
    return 0;
}