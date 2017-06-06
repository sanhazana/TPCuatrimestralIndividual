//
// Created by Santiago Hazana on 5/31/17.
//

#include "Material.h"
#include "LinkedList.h"
#include "Person.h"

Material* newMaterial(char* type, int code, char* author, char* title, int year){
    Material* material = malloc(sizeof(Material));
    material->type = type;
    material->code = code;
    material->author = author;
    material->title = title;
    material->year = year;
    material->status = "free";
    material->materialList = createStaticList(50, sizeof(Material));
    material->personList = createStaticList(50, sizeof(Person));

}

void changeMaterialCode(Material* material, int code){
    material->code = code;
}

void deleteMaterial(Material* material){
    free(material->type);
    free(material->code);
    free(material->author);
    free(material->title);
    free(material->year);
    free(material->status);
    free(material);
}
