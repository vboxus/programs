#include<iostream>
using namespace std;
class A
{
        int x,y;
        public:
        A()
        {
                x=y=0;
        }
        A(int i,int j)
        {
            x=i;
            y=j;
        }
        void show();
};
void A::show()
{
    int c;
    c=x+y;
    cout<<"\nsum of two number="<<c;
}
int main()
{
        A obj,obj1(10,10);
        obj1.show();
        return 0;

}

