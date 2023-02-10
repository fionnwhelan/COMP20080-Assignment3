#include <iostream>
using namespace std;
#include "Doctor.h"

//These are the struct-based functions
void input_doctor(Doctor& my_set, int input_medical_reg, int input_num_years, float input_income)
{
    my_set.medical_reg = input_medical_reg;
    my_set.num_years = input_num_years;
    my_set.income = input_income;
}


void doctor_combine(Doctor& combined_doc, Doctor doc1, Doctor doc2)
{
    combined_doc.medical_reg = -1;
    combined_doc.num_years = doc1.num_years + doc2.num_years;
    combined_doc.income = doc1.income + doc2.income;
}



void doctor_compare(Doctor doc1, Doctor doc2)
{
    if (doc1.income > doc2.income)
    {
        doctor_print(doc1);
    } else if (doc1.income < doc2.income)
        {
            doctor_print(doc2);
        } else if (doc1.num_years > doc2.num_years)
            {
                doctor_print(doc1);
            } else if (doc1.num_years < doc2.num_years)
                {
                    doctor_print(doc2);
                } else
                    {
                        cout << "The two doctors are equal.";
                    }

}

void doctor_print(Doctor doc)
{
    if (doc.medical_reg < 1)
    {
        cout << "This is a combined doctor.\n";
    } else
        {
            cout << "This is a real doctor.\n";
        }
    cout << "Medical registration number is: " << doc.medical_reg << "\n";
    cout << "Number of years worked is: " << doc.num_years << "\n";
    cout << "Value for income is: " << doc.income << "\n\n";
}


//Below are the class-based methods
Class_doctor::Class_doctor(int input_medical_reg, int input_num_years, float input_income)
{
    medical_reg = input_medical_reg;
    num_years = input_num_years;
    income = input_income;
}

void Class_doctor::doctor_combine(Class_doctor& combined_doc, Class_doctor doc1, Class_doctor doc2)
{
    combined_doc.medical_reg = -1;
    combined_doc.num_years = doc1.num_years + doc2.num_years;
    combined_doc.income = doc1.income + doc2.income;
}

void Class_doctor::doctor_compare(Class_doctor doc1, Class_doctor doc2)
{
    if (doc1.income > doc2.income)
    {
        doc2.doctor_print(doc1);
    } else if (doc1.income < doc2.income)
        {
            doc1.doctor_print(doc2);
        } else if (doc1.num_years > doc2.num_years)
            {
                doc1.doctor_print(doc1);
            } else if (doc1.num_years < doc2.num_years)
                {
                    doc1.doctor_print(doc2);
                } else
                    {
                        cout << "The two doctors are equal.";
                    }

}

void Class_doctor::doctor_print(Class_doctor doc)
{
    if (doc.medical_reg < 1)
    {
        cout << "This is a combined doctor.\n";
    } else
        {
            cout << "This is a real doctor.\n";
        }
    cout << "Medical registration number is: " << doc.medical_reg << "\n";
    cout << "Number of years worked is: " << doc.num_years << "\n";
    cout << "Value for income is: " << doc.income << "\n\n";
}
