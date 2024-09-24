#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H
#include <Product.h>
#include <FoodProduct.h>
#include <QTextStream>
#include <QString>
#include <QList>
class ProductList{
private:
    bool codeUsed(int pc);
    QList<Product*> m_Productlist;

public:
    void Add(Product* p);
    virtual void sell(int pc, int n);
    void remove(int pc);
    void DeleteAll();

};



#endif // PRODUCTLIST_H
