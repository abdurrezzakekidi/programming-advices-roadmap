#include <iostream>

using namespace std;

class clsCalculator
{
private:

    float _Result = 0;
	float _LastNumber = 0;
	string _LastOPeration = "clear";
	float _previousResult = 0;

    bool _IsZero(float Number)
    {
        return Number == 0;
	}

public:

    void Add(double Number)
    {
		_LastNumber = Number;
		_previousResult = _Result;
		_LastOPeration = "Adding";
		_Result += Number;
        
    }

    void Subtract(double Number)
    {
		_LastNumber = Number;
		_previousResult = _Result;
		_LastOPeration = "Subtracting";
		_Result -= Number;
        
    }

    void Multiply(double Number)
    {
		_LastNumber = Number;
		_previousResult = _Result;
		_LastOPeration = "Multiplying";
		_Result *= Number;
    }

    void Divide(double Number)
    {
		_LastNumber = Number;
        if (_IsZero(Number))
        {
			Number = 1;
        }
		_previousResult = _Result;
		_LastOPeration = "Dividing";
		_Result /= Number;
        
    }

    void CancelLastOperation()
    {
		_LastNumber = 0;
		_LastOPeration = "Canceling Last Operation";
		_Result = _previousResult;
    }

    void PrintResult()
    {
        cout << "Result: ";
		cout << "After " << _LastOPeration << " " << _LastNumber << ", the result is: " << _Result << endl;
	}

	float GetFInalResult()
	{
		return _Result;
	}

    void Clear()
    {
		_LastNumber = 0;
		_previousResult = 0;
		_LastOPeration = "Clearing";
		_Result = 0;
        
    }
};

int main()
{
    clsCalculator calculator;
	calculator.Clear();

    calculator.Add(10);
	calculator.PrintResult();

    calculator.Add(90);
	calculator.PrintResult();

	calculator.Subtract(50);
	calculator.PrintResult();

	calculator.Multiply(10);
	calculator.PrintResult();

	calculator.Divide(5);
	calculator.PrintResult();

	calculator.Divide(0);
	calculator.PrintResult();

	calculator.CancelLastOperation();
	calculator.PrintResult();


    
   
	return 0;
    
}
