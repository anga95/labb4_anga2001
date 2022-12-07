//
// Created by AnGa on 2022-12-06.
//

#ifndef LABB4_ANGA2001_MAILBOX_H
#define LABB4_ANGA2001_MAILBOX_H

#include <vector>
#include "Email.h"

class MailBox {
public:
    MailBox();
    const Email* begin() const;
    const Email* end() const;

    void setEmail(const std::string &who,const std::string& date,const std::string& subject);
    void sortWho();
    void sortDate();
    void sortSubject();

private:
    std::vector<Email> emails;
};


//friend std::ostream& operator<<(std::ostream& os, const Email& e);
//    friend struct CompWhoDateSubject;
//    friend struct CompDateWhoSubject;
//    friend struct CompSubjectWhoDate;
#endif //LABB4_ANGA2001_MAILBOX_H
