#include <iostream>
using namespace std;

class phone
{
    private:
        int number,ram,passw;
    public:
        int color,cam,size;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"number = "<<number<<endl;
            cout<<"ram = "<<ram<<endl;
            cout<<"passw = "<<passw<<endl;
            cout<<"color = "<<color<<endl;
            cout<<"cam = "<<cam<<endl;
            cout<<"size = "<<size<<endl;
        }
};

void phone :: setData(int a1, int b1, int c1)
{
    number = a1;
    ram = b1;
    passw = c1;
}

int main(){

    phone a50;
    a50.color = 1;
    a50.cam = 3;
    a50.size = 128;
    a50.setData(10,11,12);
    a50.getData();

    return 0;
}