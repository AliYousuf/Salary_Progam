#include <iostream>
#include "header.h"

Employee::Employee(std::string str)
{
   name = str;
}

void Employee::setName(std::string str)
{
  name = str;

}

std::string Employee::getName()const
{
  return name;
}

void Employee::print() const
{
  std::cout << name;
}

Employee::~Employee()
{
  std::cout << "Desteructer of Employee" << std::endl;

}
//--------------------------------------------------------------------------------------------------//
Boss::Boss(std::string str, double s) : Employee(str)
{
  salary=s;
}

void Boss::setSalary(double s)
{
  salary=s;
}

double Boss::getSalary()const
{
  return salary;
}

double Boss::payment()const
{
  return salary;
}

void Boss::print()const
{
  Employee::print();
  std::cout << "is a Boss" << std::endl;
}

Boss::~Boss()
{
  std::cout << "Destructor of Boss" << std::endl;
}

//-------------------------------------------------------------------------------------------------------------//
CommissionWorker::CommissionWorker(std::string str, double b, double c, int q) : Employee(str)
{
  baseSalary=b;
  commission=c;
  quantity=q;
}

void CommissionWorker::setBaseSalary(double b)
{
  baseSalary = b;
}

void CommissionWorker::setCommission(double c)
{
  commission=c;
}

double CommissionWorker::getBaseSalary() const
{
  return baseSalary;
}

double CommissionWorker::getCommission() const
{
  return commission;
}

int CommissionWorker::getQuantity() const
{
  return quantity;
}

double CommissionWorker::payment() const
{
  return baseSalary + commission*quantity;
}
void CommissionWorker::print()const
{
  Employee::print();
  std::cout << "is a commission Worker" << std::endl;
}
CommissionWorker::~CommissionWorker()
{
  std::cout << "Destructor of commission worker" << std::endl;
}
//-------------------------------------------------------------------------------------//

HourlyWorker::HourlyWorker(std::string str, double h, double w) : Employee(str)
{
  hours=h;
  wage=w;
}

void HourlyWorker::setHours(int h)
{
  hours=h;
}

void HourlyWorker::setWage(double w)
{
  wage=w;
}

int HourlyWorker::getHours()const
{
  return hours;
}

double HourlyWorker::getWage()const
{
  return wage;
}

double HourlyWorker::payment()const
{
  return (hours<=40 ? hours*wage : 40 *wage + (hours -40)*1.5*wage);
}

void HourlyWorker::print()const
{
  Employee::print();
  std::cout << "is a Hourly Worker" << std::endl;
}

HourlyWorker::~HourlyWorker()
{
  std::cout << "Destructer of Hourly Worker" << std::endl;
}
