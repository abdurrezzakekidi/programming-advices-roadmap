#include <iostream>
#include "clsUtil.h"
using namespace std;

int main()
{
    clsUtil::sRand();
    cout << "Random Number between 1 and 100 is: " << clsUtil::RandomNumber(1, 100) << endl;

    //cout << "Random Character is: " << clsUtil::GetRandomCharacter(clsUtil::enCharType::MixChars) << endl;
   // cout << "Random Key is: " << clsUtil::GenerateKey(clsUtil::enCharType::Digit) << endl;
	//clsUtil::GenerateKeys(5, clsUtil::enCharType::MixChars);
	cout << "---------------------------------------------" << endl;
    cout << "count to Number: " << clsUtil::CountDigitFrequency(2, 22354846852488) << endl;
	

    int Arr[100], Length = 10;
    clsUtil::FillArrayWithRandomNumbers(Arr, Length, 1, 100);
    clsUtil::PrintArray(Arr, Length);
	return 0;

    
}


