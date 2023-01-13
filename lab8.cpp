#include <iostream>

using namespace std;


class Customer{
    private:
        string name;
        int age;
    public:
        //void setName(string _name);
        //string getName(void);
        //void setAge(int _age);
        //int getAge(void);
        Customer(){

            name = "Deniz";
            age = 21;
        }

        void setName(string _name){
            name = _name;
        }
        string getName(){
            return name;
        }
        void setAge(int _age){
            age = _age;
        }
        int getAge(){
            return age;
        }
        Customer(string given_name,int given_age){

            setName(given_name);
            setAge(given_age);
        }
        void printFunc(){
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
        }
};
void swap1(Customer c1,Customer c2){
    Customer temp;
    temp = c1;
    c1 = c2;
    c2 = temp;
}
void swap2(Customer &c1,Customer &c2){
    Customer temp;
    temp = c1;
    c1 = c2;
    c2 = temp;
}
int main()
{
    Customer c1("Berke",21);
    Customer c2("Abc",25);
    cout<<"before swap1"<<endl;
    c1.printFunc();
    c2.printFunc();
    swap1(c1,c2);
    cout<<"after swap1"<<endl;
    c1.printFunc();
    c2.printFunc();
    cout<<"before swap2"<<endl;
    c1.printFunc();
    c2.printFunc();
    swap2(c1,c2);
    cout<<"after swap2"<<endl;
    c1.printFunc();
    c2.printFunc();
    return 0;
}
