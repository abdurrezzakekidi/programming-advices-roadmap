#include <iostream>
using namespace std;

class clsA
{

private:
    int V1;
    int Fun1()
    {
        return 1;
	}
protected:
    int V2;
    int Fun2()
    {
        return 2;
	}
public:
    int V3;
    int Fun3()
    {
        return 3;
    }
};

class clsB : protected clsA
{
public:
    int Fun4()
    {
       
        return 4;
    }
};

class clsC : private clsB
{
    public:
    int Fun5()
    {
        
        return 5;
	}

};





int main()
{
	
    clsB B1;
    clsC C1;
    
   



    
    
    
}


