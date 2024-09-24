#include <Product.h>
#include <QTextStream>
#include <QDate>
#include <QString>

Product::Product(QString d, int sc, int ni, double ppi)
    :m_Description(d), m_suppliercode(sc), m_noOfItems(ni), m_PricePerItem(ppi){}

void Product::sell(int ni){
    m_noOfItems -= ni;
    Transaction obj(ni,m_PricePerItem, QDate::currentDate());
    m_transactions += obj;
}

int Product::getSupplierCode()
{ return m_suppliercode; }

void Product::setProductCode(int pc)
{ m_ProductCode = pc;}

int Product::getProductCode()
{ return m_ProductCode; }

Product::~Product(){}


QString Product::ToString()
{ QString retval;
   QTextStream os(& retval);
   os << "Description: " << m_Description
      << "Supplier code: " << m_suppliercode
      << "Number of items: " << m_noOfItems
      << "Date supplied: " << m_DateSupplied.toString()
      << "Price Per Item: " << m_PricePerItem
      << "Product code: " << m_ProductCode;
   return retval; }

void Product::removeAll()
{ Transaction obj(m_noOfItems,0,QDate::currentDate());
    m_noOfItems = 0;
}

bool Product::isExpired()
{ return false;}










