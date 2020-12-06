#include "books.h"
#include<string>
#pragma once
using namespace std;


book::book()
{
    title = "Harry the Potter and the Chamber of Unnecessarily Complicated Jars";
    isbn = "1233214566540";
    author = "Buldore Dumb";
    pages = 500;
    precio = 15.99;
    promocion = false;
    inventario = 1500;
}

book::book(string name, string id, string autor, int paginas, float price, bool promo, int inventory)
{
    title = name;
    isbn = id;
    author = autor;
    pages = paginas;
    precio = price;
    promocion = promo;
    inventario = inventory;
}

void book::setTitle(string name)
{
    title = name;
}

string book::getTitle()
{
    return title;
}

void book::setISBN(string id)
{
    isbn = id;
}

string book::getISBN()
{
    return isbn;
}

void book::setAuthor(string autor)
{
    author = autor;
}

string book::getAuthor()
{
    return author;
}

void book::setPages(int paginas)
{
    pages = paginas;
}

int book::getPages()
{
    return pages;
}