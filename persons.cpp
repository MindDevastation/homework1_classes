#include "persons.h"

Persons::Persons()
{

}

void Persons::setGroupSize (int newGroupSize){groupSize = newGroupSize;}
int Persons::getGroupSize (){return groupSize;}

void Persons::setSurname (int position, QString newSurname){*(Surname + position) = newSurname;}
QString Persons::getSurname (int position){return *(Surname + position);}

void Persons::setPassport (QString newPassport, int position){*(Passport + position) = newPassport;}
QString Persons::getPassport (int position){return *(Passport + position);}

const void Persons::setID (int newID, int position){
    *(ID + position) = newID;
}
int Persons::getID (int position){return *(ID + position);}

void Persons::setInfo (QString newInfo, int position){*(AddInfo + position) = newInfo;}
QString Persons::getInfo (int position){return *(AddInfo + position);}

void Persons::setDate (QDate newDate, int position){*(Date + position) = newDate;}
QDate Persons::getDate (int position) {return *(Date + position);}

void Persons::setIndex (int newIndex){index = newIndex;}
int Persons::getIndex (){return index;}
void Persons::indexIncr(){index++;}
void Persons::indexDecr(){index--;}

void Student::resize(int *&arr){
    int* newArr = new int [groupSize];
    for (int i = 0; i < basicGroupSize; i++){
        *(newArr + i) = *(arr);
    }

    basicGroupSize = groupSize;

    delete[] arr;

    arr = newArr;
}

void Student::resize(QString *&arr){
    QString* newArr = new QString [groupSize];
    for (int i = 0; i < basicGroupSize; i++){
        *(newArr + i) = *(arr);
    }

    basicGroupSize = groupSize;

    delete[] arr;

    arr = newArr;
}

void Student::resize(QDate *&arr){
    QDate* newArr = new QDate [groupSize];
    for (int i = 0; i < basicGroupSize; i++){
        *(newArr + i) = *(arr);
    }

    basicGroupSize = groupSize;

    delete[] arr;

    arr = newArr;
}

void Student::resize(){
    resize(ID);
    resize(Surname);
    resize(Passport);
    resize(AddInfo);
    resize(Date);
    resize(University);
    resize(Speciality);
    resize(Group);}

void Student::setUniversity (int position, QString newUniversity){*(University + position) = newUniversity;}
QString Student::getUniversity (int position){return *(University + position);}

void Student::setSpeciality (int position, QString newSpeciality){*(Speciality + position) = newSpeciality;}
QString Student::getSpeciality (int position){return *(Speciality + position);}

void Student::setGroup (int position, QString newGroup){*(Group + position) = newGroup;}
QString Student::getGroup (int position){return *(Group + position);}
