//
// Created by Santiago Hazana on 5/31/17.
//

#include "Student.h"
#include "Library.h"

Student* newStudent(char* personType, char* name, char* surName, char* email, int phone, int enrollment){
    Student* student = malloc(sizeof(Student));
    student->person->personType = personType;
    student->person->name = name;
    student->person->surName = surName;
    student->person->email = email;
    student->person->phone = phone;
    student->person->enrollment = enrollment;

}

void studentTakeMaterial(Student* student, Library* library ,int code){
    takeMaterial(student->person, library, code);
}

void studentLeaveMaterial(Student* student, Library* library){
    leaveMaterial(student->person, library);
}