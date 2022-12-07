#include <iostream>
#include "Email.h"
#include "MailBox.h"
template<typename T>
void show(const T& mb){
    for (auto& e: mb) {
        std::cout << e << std::endl;
    }
}
int main() {

    MailBox mb;
    mb.setEmail("Andreas", "2002-02-28", "lab 15");
    mb.setEmail("andreas", "2002-02-23", "lab 12");
    mb.setEmail("martin", "2002-02-28", "lab 1");
    mb.setEmail("Martin", "2002-02-21", "lab 32");
    mb.setEmail("berra", "2002-02-30", "lab 222");

    //mb.sortSubject();
    mb.sortWho();
    //mb.sortDate();
    show(mb);
    return 0;
}
