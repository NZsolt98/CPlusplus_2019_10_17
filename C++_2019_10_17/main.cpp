#include <iostream>

using namespace std;

//deklaráció
int add(int,int); //aláírás
int mul(int,int);

int main()
{
    cout<<mul(10,30)<<endl;
    cout<<"Osszeg: "<<add(10,20)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
int add(int a, int b)
{
    int a1=a;
    int b1=b;
    int c=a1+b1;
    return c;
}

int mul(int a,int b)
{
    int c=0;
    for(int i=0;i<b;++i){
        //c+=a;
        c=add(c,a);
    }
    return c;
}
