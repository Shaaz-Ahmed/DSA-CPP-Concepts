// Information can be passed to function using parameter.
// Parameters acts as a variable in function.
//Parameter are specified after the function name with round brackets and parantheses.
// There should be one or more than one parameter can be declare inside the function parameter and its seperated by commas.
// Syntax :void function_name(parameter 1, paramter 2, parameter n)
// parameter should be multiple but for declaring parameter we have to declare the data types of it.

#include<iostream>
using namespace std;
void ParameterFun(string text) {  // For using paramter function we just have to write a function name () and datatypes and parameter(paramter is like a variabele in function)

    cout<< text;

}
// Default Function : While using the default function we have to write function name (datatype parameter name = "values")
// while using this function we can give it our own paramter if we will not enter our paramter it will take as default paramter

void defaultFun( string text1 = "This is a Default Parameter function") {
    cout<<text1;
}

//Multiple function parameter: We can add multiple parameter inside the function
void MutipleParameter(string name , int age) {
    cout<<name <<" is my name and my age is :" << age ;
}
int main(){
ParameterFun("This is parameter function");
cout<<"\n";cout<<"\n";
defaultFun();
cout<<"\n";cout<<"\n";
defaultFun("Here this is default function paramter but i added another value to default function parameter");
cout<<"\n";cout<<"\n";
MutipleParameter("Shaaz", 20);
cout<<"\n";
MutipleParameter("Shams", 18);
cout<<"\n";
MutipleParameter("Yaser", 17);
cout<<"\n";
return 0;
}


