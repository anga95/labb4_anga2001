//
// Created by AnGa on 2022-12-02.
//

#ifndef LABB4_ANGA2001_EMAIL_H
#define LABB4_ANGA2001_EMAIL_H

#include <string>

class Email {
private:
    std::string who;
    std::string date;
    std::string subject;
    friend std::ostream& operator<<(std::ostream& os, const Email& e);
    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWhoDate;
public:
    explicit Email(const std::string &who, const std::string &date, const std::string &subject);

};
struct CompWhoDateSubject {
    bool operator()(const Email &lhs, const Email &rhs);
};
struct CompDateWhoSubject{
    bool operator()(const Email &lhs, const Email &rhs);
};
struct CompSubjectWhoDate{
    bool operator()(const Email &lhs, const Email &rhs);
};



//            if (lhs.date < rhs.date){
//                return true;
//            }else if (lhs.date == rhs.date){
//                if (lhs.subject < rhs.subject){
//                    return true;
//                } else{
//                    return false;
//                    CompDateWhoSubject();
//                };
#endif //LABB4_ANGA2001_EMAIL_H
