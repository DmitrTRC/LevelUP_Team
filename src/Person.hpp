//
// Created by Dmitry Morozov on 2/9/22.
//

#ifndef LEVELUP_REVIEWERS_ASSIGN_PERSON_HPP
#define LEVELUP_REVIEWERS_ASSIGN_PERSON_HPP

#include <string>


class Person {
public:
    Person (const std::string &name, const std::string &surname);

    std::string Name () const;

    std::string lastName () const;

    void setName (const std::string &name);

    void setLastName (const std::string &surname);

    std::ostream &operator<< (std::ostream &os);


private:
    std::string name_;
    std::string last_name_;
    uint8_t age_;
    std::string e_mail_address_;
    std::string github_url_;


};


#endif //LEVELUP_REVIEWERS_ASSIGN_PERSON_HPP
