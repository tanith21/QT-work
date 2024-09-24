#ifndef FOODPRODUCT_H
#define FOODPRODUCT_H
#include <Product.h>
class FoodProduct:public Product{
private:
    QDate m_SellByDate;
    int m_Discount;

public:
    FoodProduct(QString d,int sc, int n, double p, QDate sbd);
    virtual void sell(int n);
    virtual QString ToString();
    virtual bool isExpired();





};
#endif // FOODPRODUCT_H
