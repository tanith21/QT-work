#include<ProductList.h>
#include<FoodProduct.h>
#include<Product.h>
#include <QString>
#include <QTextStream>
#include <QDebug>

QTextStream cout(stdout);

int main(){
QDate sbd(2021,07,24);
ProductList listObj;

Product *objt1 = new Product("Baked Beans",01,1,20.05);
Product *objct2 = new FoodProduct("Pizza",02,1,80,sbd);
Product *objct3 = new FoodProduct("Burger",02,1,50,sbd);


listObj.Add(objt1);
listObj.Add(objct2);
listObj.Add(objct3);
objt1->sell(1);
objct2->sell(1);
objct3->sell(1);







return 0;
}

















