#include<iostream>
using namespace std;
class A
{
    int n,rem,arm,c;
    public:
    A()
    {
            n=rem=arm=c=0;
    }
    void get();
    void show();
};
void A::get()
{
        cout<<"\nEnter a number:";
        cin>>n;
        c=n;
}
void A::show()
{
        while(n>0)
        {
                rem=n%10;
                arm=(rem*rem*rem)+arm;
                n=n/10;
        }
        if(arm==c)
        {
                cout<<c<<" is armstrong number:";
        }
        else
        {
            cout<<c<<" is not armstrong:";
        }
}
int main()
{
        A obj;
        obj.get();
        obj.show();
        return 0;
}