#ifndef USER_H
#define USER_H

#include <string>

class User{
 protected:
    int id;
    std::string name;
    std::string email;
    std::string password;
 public:
    User() = default;

    User(int id, const std::string& name, const std::string& email, const std::string& password) : id(id), name(name), email(email), password(password) {}

    int getId() const {
        return id;
    }

    const std::string& getName() const {
        return name;
    }

    const std::string& getEmail() const {
        return email;
    }

    const std::string& getPassword() const {
        return password;
    }
};

#endif