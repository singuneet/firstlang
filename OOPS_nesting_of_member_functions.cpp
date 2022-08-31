#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void display(void);
        void ones_compliment(void);
};

void binary :: read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid binary format"<<endl;
            exit(0);
        }
    }
    
}

void binary :: display(void)
{
    chk_bin();  //NESTING OF MEMBER FUNCTION
    cout<<"Your binary number is"<<endl;
    for(int i=0; i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

void binary :: ones_compliment(void)
{
    for(int i=0; i<s.length(); i++)
    {
        if (s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
    }
}

int main(){

    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}