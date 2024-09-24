#ifndef PRODUCT_H
#define PRODUCT_H
#include <Transaction.h>
#include <QString>
#include <QTextStream>
#include <QDate>

class Product{
private:
    QString m_Description;
    int m_suppliercode;
    int m_noOfItems;
    QDate m_DateSupplied;
    double m_PricePerItem;
    int m_ProductCode;
    QList<Transaction> m_transactions;

public:
    Product(QString d, int sc, int ni,double ppi);

    virtual void sell(int ni);

    int getSupplierCode();

    void setProductCode(int pc);

    int getProductCode();

    virtual QString ToString();

    void removeAll();

    virtual bool isExpired();

    virtual ~Product();




};
#endif // PRODUCT_H
