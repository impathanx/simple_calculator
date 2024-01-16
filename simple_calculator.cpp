//coded by- yasir Ali khan coded for-codsoft internship

using namespace std;

int main(){

    int num1, num2;
    char x;

cout<<"Enter number one"<<endl;
cin>>num1;

cout<<"Enter number two"<<endl;
cin>>num2;

cout<<"Press a for Addition"<<endl;
cout<<"Press b for Subtraction"<<endl;
cout<<"Press c for Multiplication"<<endl;
cout<<"Press d for Division"<<endl;
cout<<"Press e for Remainder"<<endl;
cin>>x;

if (x=='a')
cout<<"the sum = "<<num1 + num2<<endl;

else if (x=='b')
cout<<"the Subtraction= "<<num1 - num2<<endl;

else if (x=='c')
cout<<"the Multiplication= "<<num1 * num2<<endl;

else if (x=='d')
cout<<"the Division = "<<num1 / num2<<endl;

else if (x=='e')
cout<<"the remainder = "<<num1 + num2<<endl;

else
cout<<"invalid"<<endl;

}
