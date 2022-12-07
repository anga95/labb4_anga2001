//
// Created by AnGa on 2022-12-02.
//
#include <iostream>
#include "Email.h"

Email::Email(const std::string &who, const std::string &date, const std::string &subject)
    : who(who), date(date), subject(subject) { }

std::ostream &operator<<(std::ostream &os, const Email &e) {
    os << e.who + " " + e.date + " " + e.subject;
    return os;
}

bool CompWhoDateSubject::operator()(const Email& lhs, const Email& rhs) {
    if (lhs.who != rhs.who){
        return lhs.who < rhs.who;
    }
    if (lhs.date != rhs.date){
        return lhs.date < rhs.date;
    }
    return lhs.subject < rhs.subject;
}

bool CompDateWhoSubject::operator()(const Email& lhs, const Email& rhs) {
    if (lhs.date != rhs.date){
        return lhs.date < rhs.date;
    }
    if (lhs.who != rhs.who){
        return lhs.who < rhs.who;
    }
    return lhs.subject < rhs.subject;
}


bool CompSubjectWhoDate::operator()(const Email& lhs, const Email& rhs) {
    if (lhs.subject != rhs.subject){
        return lhs.subject < rhs.subject;
    }
    if (lhs.who != rhs.who){
        return lhs.who < rhs.who;
    }
    return lhs.date < rhs.date;
}



