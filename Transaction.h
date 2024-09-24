#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <QString>
#include <QDebug>
#include <QDate>
class Transaction{
private:
    int m_noOfItems;
    double m_PricePerItem;
    QDate m_TransActionDate;

public:
    Transaction(int n, double p, QDate T);


    QString ToString();


};

#endif // TRANSACTION_H
