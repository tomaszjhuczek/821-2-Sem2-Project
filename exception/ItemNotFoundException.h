//
// Created by tomasz on 24.05.25.
//

#ifndef ITEMNOTFOUNDEXCEPTION_H
#define ITEMNOTFOUNDEXCEPTION_H
#include <exception>
#include <string>
using std::string;

class ItemNotFoundException : public std::exception {
    private:
        string message;
    public:
    virtual const char* what() const throw();

};



#endif //ITEMNOTFOUNDEXCEPTION_H
