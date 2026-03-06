#pragma once
#include <string>
#include <iostream>

using namespace std;

class clsUtil
{
private:
	int _x;

public:

	enum enCharType {
		SmallLetter = 1,
		CapitalLetter = 2,
		SepcialCharacter = 3,
		Digit = 4,
		MixChars = 5
	};

	static double ReadNumber(const string& Message = "Enter a Number: ")
	{
		double Number;

		cout << Message;
		cin >> Number;
		return Number;
	}

	static char ReadCharacter()
	{
		char C1;
		cout << "Please Enter Your Character?\n";
		cin >> C1;
		return C1;
	}

	static string ReadText()
	{
		string Text;
		cout << "Please enter Text:\n";
		cin.ignore();
		getline(cin, Text);
		return Text;
	}

	static bool IsPerfectNumber(const int& Number)
	{
		int Sum = 0;

		for (int i = 1; i < Number; i++)
			if (Number % i == 0)
				Sum += i;

		return Number == Sum;
	}

	static unsigned int SumOfDigits(int Number)
	{
		unsigned int Reminder = 0, Sum = 0;

		while (Number > 0)
		{
			Reminder = Number % 10;
			Sum += Reminder;
			Number = Number / 10;
		}

		return Sum;
	}

	static int ReverseNumber(int Number)
	{
		bool isNegative = Number < 0;
		if (isNegative)
			Number = abs(Number);

		int Remainder = 0, RevNumber = 0;

		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			RevNumber = RevNumber * 10 + Remainder;
		}
		return isNegative ? -RevNumber : RevNumber;
	}

	static short CountDigitFrequency(const short& DigitToCheck, int Number)
	{
		int FreqCount = 0, Remainder = 0;

		while (Number > 0)
		{
			Remainder = Number % 10; // getting the digit in ones place
			Number = Number / 10; // dividing by 10 to remove the digit in ones place
			if (DigitToCheck == Remainder)
				FreqCount++;
		}

		return FreqCount;
	}

	static void CountAllDigitsFrequncies(const int& Number)
	{
		for (int i = 0; i <= 9; i++) // trying all possible digits from 0 - 9
		{
			short DigitFreq = clsUtil::CountDigitFrequency(i, Number);

			if (DigitFreq > 0)
				cout << "Digit " << i << " frequency is " << DigitFreq << " time(s)." << std::endl;

		}
	}

	static string EncryptText(string Text, short& EncryptKey)
	{
		for (int i = 0; i <= Text.length(); i++)
		{
			char EncryptedChar = char((int)Text[i] + EncryptKey);
		}

		return Text;
	}

	static string DecrypText(string Text, short& EncryptKey)
	{
		for (int i = 0; i <= Text.length(); i++)
		{
			char DecryptedChar = char((int)Text[i] - EncryptKey);

		}
		return Text;
	}

	static void sRand()
	{
		srand((unsigned)time(NULL));
	}

	static int RandomNumber(const int& From, const int& To)
	{
		return rand() % (To - From + 1) + From;
	}

	static char GetRandomCharacter(enCharType CharType)
	{
		switch (CharType)
		{
		case enCharType::SmallLetter:
			return char(RandomNumber(97, 122));

		case enCharType::CapitalLetter:
			return char(RandomNumber(65, 90));

		case enCharType::SepcialCharacter:
			return char(RandomNumber(33, 47));

		case enCharType::Digit:
			return char(RandomNumber(48, 57));

		case enCharType::MixChars:
			return char(RandomNumber(0, 1) ? RandomNumber(97, 122) : RandomNumber(65, 90));
		}
	}

	static string GenerateWord(enCharType CharType, short Length)
	{
		string Word = "";

		for (int i = 0; i < Length; i++)
		{
			Word += GetRandomCharacter(CharType);
		}

		return Word.substr(0, Word.length() - 1);
	}

	static string GenerateKey(enCharType CharType, short Segments = 4, short SegmentLength = 4)
	{
		string Key = "";

		for (short i = 0; i < Segments; i++)
		{
			for (short j = 0; j < SegmentLength; j++)
			{
				Key += GetRandomCharacter(CharType);
			}

			Key += "-";
		}

		return Key.substr(0, Key.length() - 1);
	}

	static void GenerateKeys(short Keys, enCharType CharType)
	{
		for (short i = 0; i < Keys; i++)
			cout << GenerateKey(CharType) << endl;
	}

	static void Swap(int& x, int& y)
	{
		int Temp = x;
		x = y;
		y = Temp;
	}

	static void Swap(string& x, string& y)
	{
		string Temp = x;
		x = y;
		y = Temp;
	}

	static void Swap(double& x, double& y)
	{
		double Temp = x;
		x = y;
		y = Temp;
	}

	static void Swap(char& x, char& y)
	{
		char Temp = x;
		x = y;
		y = Temp;
	}

	static void FillArrayWithRandomNumbers(int Arr[100], int Length, int Start, int Finish)
	{
		for (int i = 0; i < Length; i++)
		{
			Arr[i] = RandomNumber(Start, Finish);
		}
	}

	static void PrintArray(int Array[100], const int& Length)
	{

		for (int i = 0; i < Length; i++)
			cout << Array[i] << " ";

		cout << "\n";
	}

	static void Tabs(short TabCount)
	{
		for (short i = 0; i < TabCount; i++)
			cout << "\t";
	}

	static void ShuffleArray(int Array[100], const int& Length)
	{
		for (int i = 0; i < Length; i++)
		{
			int RandomIndex = RandomNumber(1, Length - 1);
			Swap(Array[i], Array[RandomIndex]);
		}
	}




};
