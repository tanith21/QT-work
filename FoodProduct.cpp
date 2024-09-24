#include <FoodProduct.h>
#include <QDate>
#include <QString>
#include <QTextStream>

FoodProduct::FoodProduct(QString d, int sc, int n, double p, QDate sbd):Product(d,sc,n,p){m_SellByDate=sbd;}

void FoodProduct::sell(int n){
    Product::sell(n);}

QString FoodProduct::ToString(){
    Product::ToString();
    QString retval;
    QTextStream os(&retval);
    os << "Sell By Date: " <<m_SellByDate.toString()
       << "Discount: "<< m_Discount;
    return retval;}

bool FoodProduct::isExpired(){
    if (QDate::currentDate() > m_SellByDate)
        return true;
    else
        return false;}
