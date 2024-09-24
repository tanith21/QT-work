
#include <ProductList.h>
#include <QDate>
#include <QTextStream>
#include <QString>
#include <QDebug>



bool ProductList::codeUsed(int pc){
    foreach(Product *p, m_Productlist)
    {if (p->getProductCode() == pc)
        return true;}

 return false;
}


void ProductList::Add(Product *p){


    p->setProductCode(p->getSupplierCode()*1000);
    while (codeUsed(p->getProductCode())== true)
    p->setProductCode(p->getProductCode()+1);
    m_Productlist += p;
}

void ProductList::sell(int pc, int n){
    foreach(Product *p, m_Productlist)
    {if (pc == p->getProductCode())
        p->sell(n);}
}
void ProductList::remove(int pc){
    foreach(Product *p, m_Productlist)
    {if (p->getProductCode() == pc)
            p->removeAll();}
}
void ProductList::DeleteAll(){
    foreach(Product *p, m_Productlist)
    {delete p;}

}


