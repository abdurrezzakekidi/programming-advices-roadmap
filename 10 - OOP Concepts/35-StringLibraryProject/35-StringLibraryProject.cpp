#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
    clsString s1("Abdurrezzak Ekidi");

    cout << s1.Length() << endl;
    cout << clsString::Length("A.rezzak") << endl;

    cout << s1.CountWords() << endl;
    cout << clsString::CountWords("Malatya_Turgut_Ozal_University") << endl;

    s1.UpperFirstLetterOfEachWord();
    cout << endl;
    cout << "_________________________________\n";

    clsString s2("all the stars are closer");
    s2.LowerFirstLetterOfEachWord();
    cout << s2.GetValue() << endl;
    cout << s2.Value << endl;
    cout << "_________________________________\n";
    
    cout << clsString::UpperFirstLetterOfEachWord("stars can't shine without darkness!") << endl;

    clsString s3("I am the danger skylar!");
    s3.UpperFirstLetterOfEachWord();
    cout << s3.GetValue() << endl;

    s3.LowerFirstLetterOfEachWord();
    cout << s3.GetValue() << endl;

    clsString s4("hEy ChIcAgO!");

    s4.InvertAllLettersCase();
    cout << s4.GetValue() << endl;

    

    vector<string> v1 = s2.Split(" ");

    clsString s5 = clsString::Join(v1, "-");
    cout << s5.GetValue() << endl;

    clsString s6("----Mohammed Abu Hadhoud----");
    s6.Trim();

    cout << s6.GetValue() << endl;

    s1.ReplaceWord("Abdurrezzak", "Omar");
    cout << s1.GetValue() << endl;

    return 0;
}