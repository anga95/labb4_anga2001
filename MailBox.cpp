//
// Created by AnGa on 2022-12-06.
//

#include <ostream>
#include "MailBox.h"
#include "Email.h"

MailBox::MailBox() : emails(){ }

void MailBox::setEmail(const std::string& who,const std::string& date,const std::string& subject) {
    Email e{who,date,subject};
    emails.push_back(e);
}
void MailBox::sortWho(){
    std::sort(emails.begin(), emails.end(), CompWhoDateSubject());
}
void MailBox::sortDate(){
    std::sort(emails.begin(), emails.end(), CompDateWhoSubject());
}

void MailBox::sortSubject(){
        std::sort(emails.begin(), emails.end(), CompSubjectWhoDate());
}
const Email* MailBox::begin() const {
    return &emails[0];
}
const Email* MailBox::end() const {
    return MailBox::begin() + emails.size();
};