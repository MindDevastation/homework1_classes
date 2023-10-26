#ifndef PERSONS_H
#define PERSONS_H
#include <iostream>
#include <stdlib.h>
#include <QDate>


class Persons
{
public:
    Persons();
protected:
    int basicGroupSize = 1;
    int groupSize = 1;
    int* ID = new int [basicGroupSize];
    QString* Surname = new QString [basicGroupSize];
    QString* Passport = new QString [basicGroupSize];
    QString* AddInfo = new QString [basicGroupSize];
    QDate* Date = new QDate [basicGroupSize];
    int index = 0;
public:
    void setGroupSize (int newGroupSize);
    int getGroupSize ();

    void setSurname (int position, QString newSurname);
        QString getSurname (int position);

    void setPassport (QString newPassport, int position);
        QString getPassport (int position);

    void setDay (int newDay, int position);
        int getDay (int position);

    void setMonth (int newMonth, int position);
        int getMonth (int position);

    void setYear (int newYear, int position);
        int getYear (int position);

    const void setID (int newID, int position);
        int getID (int position);

    void setInfo (QString newInfo, int position);
        QString getInfo (int position);

    void setDate (QDate newDate, int position);
        QDate getDate (int position);

    void setIndex (int newIndex);
        int getIndex ();
    void indexIncr();
    void indexDecr();

    ~Persons();
};


class Student : public Persons{
        QString* University = new QString [basicGroupSize];
        QString* Speciality = new QString [basicGroupSize];
        QString* Group = new QString [basicGroupSize];
    public:
    void setUniversity (int position, QString newUniversity);
        QString getUniversity (int position);

    void setSpeciality (int position, QString newSpeciality);
        QString getSpeciality (int position);

    void setGroup (int position, QString newGroup);
        QString getGroup (int position);

    void resize(int*& arr);
    void resize(QString*& arr);
    void resize(QDate*& arr);
    void resize();

    ~Student();
};

#endif // PERSONS_H
