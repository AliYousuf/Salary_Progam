#include <string>

class Employee{

      std::string name;

public:
      Employee(std::string str="Ali");
      void setName(std::string str);
      std::string getName() const;
      virtual double payment() const = 0;
      virtual void print() const;
      ~Employee();
};

class Boss :public Employee{
      double salary;

public:
      Boss(std::string str="Ali", double s=1000);
      void setSalary(double s);
      double getSalary() const;
      double payment() const;
      void print() const;
      ~Boss();

};

class HourlyWorker : public Employee{
      int hours;
      double wage;
public:
      HourlyWorker(std::string str ="Ali", double h= 200 , double w=20);
      void setHours(int h);
      void setWage(double w);
      int getHours()const;
      double getWage()const;
      double payment() const;
      void print() const;
      ~HourlyWorker();
};
class CommissionWorker : public Employee {
      double baseSalary;
      double commission;
      int quantity;
public:
      CommissionWorker(std::string  str="Ali", double b=200, double c=20, int q=10);
      void setBaseSalary(double b);
      void setCommission(double c);
      void setQuantity(int q);
      double getBaseSalary()const;
      double getCommission()const;
      int getQuantity()const;
      double payment()const;
      void print() const;
      ~CommissionWorker();
};


