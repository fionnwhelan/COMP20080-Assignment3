struct Doctor
{
    int medical_reg;
    int num_years;
    float income;
};

void input_doctor(Doctor& my_set, int input_medical_reg, int input_num_years, float input_income);
void doctor_combine(Doctor& combined_doc, Doctor doc1, Doctor doc2);
void doctor_compare(Doctor doc1, Doctor doc2);
void doctor_print(Doctor doc);



class Class_doctor
{
private:
    int medical_reg;
    int num_years;
    float income;
public:
    Class_doctor(int input_medical_reg, int input_num_years, float input_income);
    void doctor_combine(Class_doctor& combined_doc, Class_doctor doc1, Class_doctor doc2);
    void doctor_compare(Class_doctor doc1, Class_doctor doc2);
    void doctor_print(Class_doctor doc);
};
