//
// Created by Santiago Hazana on 5/31/17.
//

#ifndef TPCUATRIMESTRALINDIVIDUAL_PERSON_H
#define TPCUATRIMESTRALINDIVIDUAL_PERSON_H

typedef struct person Person;

struct person{
    char* personType;
    char* name;
    char* surName;
    char* email;
    int phone;
    int numberOfBooks;
    double toPay;
    int enrollment;
    Material* material;
    Loan* loan;
};

void newPerson(char* personType, char* name, char* surName, char* email, int phone, int enrollment);
void takeMaterial(Person* person, Library* library, int code);
void leaveMaterial(Person* person, Library* library);

#endif //TPCUATRIMESTRALINDIVIDUAL_PERSON_H
