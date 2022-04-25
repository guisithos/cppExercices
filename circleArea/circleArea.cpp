#include<iostream>
using namespace std;
int main()
{ int a;
    void circleArea(int);  //Function
    cout<<"\nDigite o raio: ";
    cin>>a;
    circleArea(a);  //Call


}
void circleArea(int r)
{
    cout<<"\nArea do circulo eh: "<<3.14*r*r;
}
