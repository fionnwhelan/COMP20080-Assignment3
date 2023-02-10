#include <iostream>
using namespace std;
#include "Doctor.h"

int main()
{
    int u, v, w, x, y, z, s_or_c;
    Doctor doc1, doc2, combined_doc;
    cout << "Please enter medical registration number (doctor 1):\n";
    cin >> u;
    cout << "Please enter number of years worked (doctor 1):\n";
    cin >> v;
    cout << "Please enter a value for income (doctor 1):\n";
    cin >> w;
    cout << "Please enter medical registration number (doctor 2):\n";
    cin >> x;
    cout << "Please enter number of years worked (doctor 2):\n";
    cin >> y;
    cout << "Please enter a value for income (doctor 2):\n";
    cin >> z;
    cout << "Would you like to use the struct ADT or the class ADT? Enter 0 for struct or 1 for class.\n";
    cin >> s_or_c;
    while (s_or_c != 1 && s_or_c !=0)
    {
        cout << "This is not a valid entry. Please enter 0 for struct or 1 for class.\n";
        cin >> s_or_c;
    }
    if (s_or_c == 0)
    {
        input_doctor(doc1, u, v, w);
        input_doctor(doc2, x, y, z);
        cout << "\nBelow are the inputted values for Doctor 1: \n";
        doctor_print(doc1);
        cout << "Below are the inputted values for Doctor 2: \n";
        doctor_print(doc2);
        doctor_combine(combined_doc, doc1, doc2);
        cout << "Below are the values for the combined doctor: \n";
        doctor_print(combined_doc);

        cout << "Below are the values for the greater doctor. If the doctors are equal, it will be stated: \n";
        doctor_compare(doc1, doc2);
    } else if (s_or_c == 1)
        {
            Class_doctor combined_doc(0, 0, 0);
            Class_doctor doc1(u, v, w);
            Class_doctor doc2(x, y, z);
            cout << "\nBelow are the inputted values for Doctor 1: \n";
            doc1.doctor_print(doc1);
            cout << "Below are the inputted values for Doctor 2: \n";
            doc2.doctor_print(doc2);
            doc1.doctor_combine(combined_doc, doc1, doc2);
            cout << "Below are the values for the combined doctor: \n";
            doc1.doctor_print(combined_doc);

            cout << "Below are the values for the greater doctor. If the doctors are equal, it will be stated: \n";
            doc1.doctor_compare(doc1, doc2);
        }
}
