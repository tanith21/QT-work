#include <Transaction.h>
#include <QString>
#include <QDebug>
#include <QDate>
#include <QTextStream>

Transaction::Transaction(int n, double p, QDate T)
    :m_noOfItems(n), m_PricePerItem(p), m_TransActionDate(T){}

QString Transaction::ToString(){
    QString retval;
    QTextStream os(&retval);
    os << "Number of items: " << m_noOfItems
       << "Price per item: " <<m_PricePerItem
       << "Transaction Date " << m_TransActionDate.toString();
        return retval; }




