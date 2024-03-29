//Exploring Decision Making - IF - IF ELSE - NESTED IF ELSE - TERNARY IF
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"DECISION MAKING ...\n"<<endl;

    //declaring variable
    int a, b, max;
    cout<<"Enter a: | ";
    cin>>a;
    cout<<"Enter b: | ";
    cin>>b;

    //?IF STATEMENT - checking whether 'a' is even, if even, print 'a' and if not then do nothing
    cout<<"\n\t ------------------------------"<<endl;
    cout<<"\t IF Statement..."<<endl;
    cout<<"\t ------------------------------"<<endl;
    if (a % 2 == 0)
    {
        cout<<"\t 'a' is EVEN"<<endl;
    }

    //?IF - ELSE STATEMENT - checking whether 'a' is even or odd
    cout<<"\n\t ------------------------------"<<endl;
    cout<<"\t IF-ELSE Statement..."<<endl;
    cout<<"\t ------------------------------"<<endl;
    if (a % 2 == 0)
    {
        cout<<"\t 'a' is EVEN"<<endl;
    }
    else{
        cout<<"\t 'a' is ODD"<<endl;
    }

    //?IF - ELSE IF-ELSE STATEMENT - comparing two numbers whether they are less, greater or equal
    cout<<"\n\t ------------------------------"<<endl;
    cout<<"\t IF-ELSE IF- ELSE Statement..."<<endl;
    cout<<"\t ------------------------------"<<endl;
    if (a < b)
    {
        cout<<"\t 'b' is GREATER"<<endl;
    }
    else if(a > b){
        cout<<"\t 'a' is GREATER"<<endl;
    }
    else{
        cout<<"\t 'a' and 'b' are equal | a = b |"<<endl;
    }

    //?IF - ELSE STATEMENT - ONE LINER
     //!if-else can be written in only one line and without braces if the code block contain only one line as:
    cout<<"\n\t ------------------------------"<<endl;
    cout<<"\t IF-ELSE Statement... OneLine/Without braces"<<endl;
    cout<<"\t ------------------------------"<<endl;

    if (a % 2 == 0) cout<<"\t 'a' is EVEN"<<endl;
    else cout<<"\t 'a' is ODD"<<endl;

        //? TERNARY IF ELSE Statement....
    cout<<"\n\t ------------------------------"<<endl;
    cout<<"\t TERNARY IF- ELSE Statement"<<endl;
    cout<<"\t ------------------------------"<<endl;

    max = (a>b) ? a : b;
    cout<<"\t max = "<<max<<endl;
    // cout<<"\t max = "<<(a>b)?a:b;
    (a>b) ? cout<<"\t max is "<< a : cout<<"\t max is "<< b;

    //?IF - ELSE IF-ELSE STATEMENT - comparing two numbers whether they are less, greater or equal
    cout<<"\n\t ------------------------------"<<endl;
    cout<<"\t IF-ELSE | Comparison Operators..."<<endl;
    cout<<"\t ------------------------------"<<endl;
    if(a<b) cout<<"\t a<b is true"<<endl;
    if(a<=b) cout<<"\t a<=b is true"<<endl;
    if(a==b) cout<<"\t a==b is true"<<endl;
    if(a>b) cout<<"\t a>b is true"<<endl;
    if(a>=b) cout<<"\t a>=b is true"<<endl;
    if(a!=b) cout<<"\t a!=b is true"<<endl;
    /* When C++ DOES ANY OF THE ABOVE COMPARISONS, IT RETURNS A "1", if the condition is true and "0" if the condition
    is false */

    //?IF - ELSE Combining Multiple Conditions
    cout<<"\n\t ---------------------------------------------"<<endl;
    cout<<"\t IF-ELSE: Combining Multiple Conditions (&& ||)..."<<endl;
    cout<<"\t ---------------------------------------------"<<endl;

    if(a<100 && a%2==0) cout<<"\t a < 100 and even"<<endl; //both conditions must be true - AND
    if(a<100 || a%2==0) cout<<"\t a is either less than 100 or even"<<endl; //either of the condition must be true - OR

    cout<<endl;
    return 0;
}