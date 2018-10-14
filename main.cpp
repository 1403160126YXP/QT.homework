#include "mainwindow.h"
#include <QList>
#include <QDebug>
#include <QString>
#include <QCoreApplication>
#include "ui_mainwindow.h"
using namespace std;
List::List(int number,QString name,int a,int b)
{
this->number=number;
this->name=name;
this->a=a;
this->b=b;
}
void List::display()
{
    qDebug()<<number<<name<<a<<'\t'<<b;
}
QString List::Name()
{
    return name;
}
int List::A()
{
    return a;
}
int List::B()
{
    return b;
}
void foreachst(QList <List> information)
{
    qDebug()<<"  　学号"<<"    姓名"<<" 课程一"<<"　　　　课程二";
    foreach (List infor, information)
    {
        infor.display();
    };
    qDebug()<<"\n";
}

int main(int argc,char *argv[])
{
    QList<List>information;
    List list1(1403130209,"鲁智深",80,72);
    List list2(1403140101,"林冲",82,76);
    List list3(1403140102,"宋江",76,85);
    List list4(1403140103,"武松",88,80);
    information<<list1<<list2<<list3<<list4;
    foreachst(information);
               qDebug()<<"--------名字编号--------";
               std::sort(information.begin(), information.end(), [](List s1, List s2)  {return s1.Name()>s2.Name();});
               foreachst(information);
               qDebug()<<"--------课程一排名--------";
               std::sort(information.begin(), information.end(), [](List s1, List s2)  {return s1.A()>s2.A();});
               foreachst(information);
               qDebug()<<"--------课程二排名--------";
               std::sort(information.begin(), information.end(), [](List s1, List s2)  {return s1.B()>s2.B();});
               foreachst(information);
               return 0;
}
