#ifndef Lab10
#define Lab10
#include <iostream>
using namespace std;

class employee{
protected:
    string last;
    string first;
    double sal;
    string title;
public:
    employee(){
        last = "";
        first = "";
        sal = 0;
        title = "";
    }
    employee(string b, string a, double c, string d){
        last = a;
        first = b;
        sal = c;
        title = d;
    }
    double salary(){
        return sal;
    }
    void displayName(){
        cout << first << " " << last << endl;
    }
    void displaySal(){
        cout << salary() << endl;
    }
    void displayJob(){
        cout << title << endl;
    }
    virtual void displayInfo(){
        displayName();
        displaySal();
        displayJob();
    }
};

class Manager : public employee{
    protected:
    double bonus;
    public:
        Manager(){
            title = "Manager";
        }
        Manager(string b, string a, double c, double d){
            title = "Manager";
            last = a;
            first = b;
            sal = c;
            bonus = d;
        }
        double salary(){
            return sal + bonus;
        }
        void displayBonus(){
            cout << bonus << endl;
        }
        void displayInfo(){
        displayName();
        displaySal();
        displayJob();
        displayBonus();
        }

};

class Executive : public Manager{
    protected:
    double stock;
    public:
        Executive(){
            title = "Executive";
        }
        Executive(string b, string a, double c, double d, double e){
            title = "Executive";
            last = a;
            first = b;
            sal = c;
            bonus = d;
            stock = e;
        }
        double salary(){
            return sal + bonus + stock;
        }
        void displayStock(){
            cout << stock << endl;
        }
        void displayInfo(){
        displayName();
        displaySal();
        displayJob();
        displayBonus();
        displayStock();
        }
};

class Technical_Staff : public employee{
    protected:
    double profit_share;
    public:
        Technical_Staff(){
            title = "Technical Staff";
        }
        Technical_Staff(string b, string a, double c, double e){
            last = a;
            first = b;
            sal = c;
            title = "Technical Staff";
            profit_share = e;
        }
        void displayProfit(){
            cout << profit_share << endl;
        }
        void displayInfo(){
        displayName();
        displaySal();
        displayJob();
        displayProfit();
        }
};

class soft_engineer : public Technical_Staff{
    protected:
    double overtime;
    public:
        soft_engineer(){
            title = "Software Engineer";
        }
        soft_engineer(string b, string a, double c, double e, double f){
            title = "Software Engineer";
            last = a;
            first = b;
            sal = c;
            overtime = e;
            profit_share = f;
        }
        void displayovertime(){
            cout << overtime << endl;
        }
        void displayInfo(){
        displayName();
        displaySal();
        displayJob();
        displayProfit();
        displayovertime();
        }
};

class Test_engineer : public Technical_Staff{
    public:
        Test_engineer(){
            title = "Test Engineer";
        }
        Test_engineer(string b, string a, double c, double e){
            last = a;
            first = b;
            sal = c;
            title = "Test Engineer";
            profit_share = e;
        }
        void displayInfo(){
        displayName();
        displaySal();
        displayJob();
        displayProfit();
        }
};

#endif
