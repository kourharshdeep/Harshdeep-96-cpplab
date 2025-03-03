/*wap to demonstrate working of function with no return type and no parameter
oops feature(namespace, class, object, access specifier, member variables and member functions)

#include <iostream>
using namespace std;
class Program {
    public : void inline message1() {
        cout<<"Hi\n";
    }
};
int main() {
    Program obj;
    obj.message1();
    return 0;
}
*/

/*wap to create a class with name Student_Data with function name,
Welcome_Message(), this function on execution will display a message
Welcome to MIET Jammu.
Now we will add 1 more function with name Validate_RegNo(), this function will accept student name and registration number from student and validate it.
(valid RegNo's are from 61 to 120) */

#include<iostream>
using namespace std;
class Student_Data {
    public : void Welcome_Message() { //function with no return type and no parameter
        cout<<"Welcome to MIET Jammu.\n";
    }
    private : string name;
    int RegNo;
    public : string Validate_RegNo() { //function with a return type and one parameter
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<"Enter your Registration Number: ";
        cin>>RegNo;
        if(RegNo >= 61 && RegNo <= 120) {
            return "True";
        }
        else {
        return "False";
        }
    }
};
int main() {
    Student_Data obj;
    obj.Welcome_Message();
    string res;
    res = obj.Validate_RegNo();
    if(res=="TRUE") {
        cout<<"\n Login Successful";
    }
    else{
    cout<<"\n Login Fail";
    }
    return 0;
}
