#include "producto.h"
#include <string>
#pragma once
using namespace std;

class book : public producto
{
protected:
    string title;
    string isbn;
    string author;
    int pages;

public:
    book();
    book(string name, string id, string autor, int paginas, float price, bool promo, int inventory);

    void setTitle(string name);
    string getTitle();

    void setISBN(string id);
    string getISBN();

    void setAuthor(string autor);
    string getAuthor();

    void setPages(int paginas);
    int getPages();
};