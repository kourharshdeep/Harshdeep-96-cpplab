/* normal function v/s static variable in cpp

#include<iostream>
using namespace std;
class Program{
    public:void fun() {
        static int n=0; //static variable inside a function
        n++;
        cout<<"Value of n is: "<<n<<endl;
    }
};
int main(){
    Program obj1,obj2,obj3;
    obj1.fun();
    obj2.fun();
    obj3.fun();
    return 0;
} */

/* WAP to create a class with name UserCount and a function count(), this function will count
toatl number of users of class. */

#include<iostream>
using namespace std;
class UserCount {
    public: static int count() {
        static int n = 0; //static variable inside a function
        n++;
        cout << "Total number of users: " <<n<< endl;
        return n;
    }
};
int main() {
    UserCount obj1,obj2,obj3;
    obj1.count();
    obj2.count();
    obj3.count();
    return 0;
}