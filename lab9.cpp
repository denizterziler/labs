#include <iostream>

using namespace std;
template <class T> class Var{
private:
    T variable;
public:
    Var(T variable){
        setVariable(variable);
    }
    void setVariable(T var){
        variable = var;
    }
    T getVariable(){
        return variable;
    }
    void print(){
        cout << getVariable() << endl;
    }
};
double calcEStep (int k){
        int i;
        double fact;
        while(i<=k){

            if(k==0){
                fact = 1;
            }
            else{
                fact = fact * i;
            }
            i++;
        }

        return 1/fact;
}
double calcLnStep (int k){
        int i;
        double sum;
        sum = 1.0/(((2*k)+1)*((2*k)+2));
        return sum;
}
double chooseEorLn (double (*func) (int), int k){
    double sum;

    for (int i=0;i<=k; i++){
        sum += (*func)(i);
        }
    return sum;
}

template <typename T> T maximum(T x, T y){
    return x > y ? x : y;
}
int main()
{
    /*int a = 9;
    int b = 3;
    float c = 2.4;
    float d = 2.5;
    char e = 'e';
    char f = 'f';
    cout<<"greater int: "<<maximum(a,b)<<endl;
    cout<<"greater float: "<<maximum(c,d)<<endl;
    cout<<"greater char: "<<maximum(e,f)<<endl;
    Var<char> variable1('b');
    Var<int> variable2(5);
    Var<float> variable3(5.3);
    Var<string> variable4("abc");
    variable1.print();
    variable2.print();
    variable3.print();
    variable4.print();*/
    cout<<chooseEorLn(calcEStep,5)<<endl;
    cout<<chooseEorLn(calcLnStep,5);


    return 0;
}
