#include<iostream>
using namespace std;

class Ap{
    private:
    int j;
    string str;
    protected:
    int x;
    string tj;
    public:
    void view(){
        cout<<x<<endl<<" "<<tj<<endl;
    }
};

class hk : public Ap{
    int number;
    string helo;
    public:
    void declear(){
        j = number;
        str = helo;

    }
    void view(){
        cout<<j<<endl<<str<<endl;
    }
    hk(int num, string sk){
        number = num;
        helo = sk;
    }

};

int main(){
    hk HK(25, "hello");
    HK.declear();
    HK.view();
}

