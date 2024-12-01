#include <iostream>
#include <string>
using namespace std;

// 2a) write a program to determine whether a program is a prime or not?
//2b) write a program to find the sum of all numbers in an array
class Q2{
    public:

    //Question 2a
    void PrimNum(){
        int value;
        bool isPrime;
        cout<<"input a number";
        cin>>value;

        if (value <= 1) {
            isPrime = false;
        } 
        else {
            for (int i = 2; i <= value / 2; i++) {
                if (value % i == 0) {
                    isPrime = true;
                    break;
                    }
                }
            }
    }

    //question 2b
    void SumArr(){
        int Arr[3];
        int sum = 0;
        cout<<"input three numbers"<<endl;

        for(int i=1; i<3; i++){
            cin>>Arr[i];
            sum += Arr[i];
        }
        cout<<"sum of elements stored in the array is: "<< sum <<endl;
    }
       
};

//3b)write program to sort a list of element using bubble sort algorithm
//3b) write a program to read 10 numbers from the keyboard and find thier sum and average.
class Q3{
    public:
    void BubbleSort(){
        //for bubble sorting algorithm
    }

    int AddAverage(){
        int num[10];
        int sum=0;
        float average;
        cout<<"Input 10 numbers"<<endl;
        for(int i=0; 1<10; i++){
            cin >> num[i];
            sum += num[i];
        }
        average= sum/10;
        cout<<"Sum of numbers is: "<< sum <<endl;
        cout<<"Average of numbers is: "<< average<< endl;
    }
};

//4a) write a program to compute the length of a string function 
//4b) write a program to find the position of a target  value within an array using linear search.your program should have argument abd return type.
class Q4{
    public:
    void Q4a(){}
    void Q4b(){}
};

//5a) write a program to add two numbers using pointers. your program should be a function with no argument but with return type
//5b) write a program to check whether a number is a palindrome or not.program should be a function with no argument and with return type.
class Q5{
    public:
    void AddPtr(){
        int a=5;
        int b=6;
        int* p= &a;
        int* q= &b;
        cout<<"the sum of entered numbers is: "<< *p +*q <<endl;
    }
    void isPalindrome(){
        //meant for palindrome
    }
};

//6a) create a structure called "student" with members: name,age, and total marks.input data for two students , display information andaverage total marks.
//6b) write a program to find the odd, even, positive, and negative from a given number (integer)
class Q6{
    public:
    void Q6a(){
        //involves structure
    }
    void Q6b(){
        int num;
        string sign;
        string parity;
        cout << "Input an integer: ";
        cin >> num;
        if (num == 0) {
            cout << "The number is Zero." << std::endl;
        } 
        else {
            sign = (num > 0) ? "positive" : "negative";
            parity = (num % 2 == 0) ? "even" : "odd";
        }
        cout << "Number is " << sign <<endl;
        cout << "Number is "<< parity <<endl;
    }
};

//7a) write a c++ program to calculate the factorial of a given number using recursive function
//7b) write a program to print your name, date of birth and mobile number
int main(){
    //Q2-class  ans-object   PrimNum() is answer for (2a), SumArr is the answer for (2b)
    Q2 ans;
    ans.PrimNum();
    ans.SumArr();

    //Q3-class  Bubblesort() function for answer (3a), AddAverage() is the for (3b)
    Q3 ansr;
    ansr.BubbleSort();
    ansr.AddAverage();

    //Q4-class  ans-object  Q4a-member fuction  Q4b-member function
    Q4 answr;
    answr.Q4a();
    answr.Q4b();

    //Q5-class  AddPtr answer for (5a)  isPalindrome() function answer foor (5b)
    Q5 answer;
    answer.AddPtr();
    answer.isPalindrome();

    //Q6- class  ans-object  Q6a-members function Q6b-member function
    Q6 answers;
    answers.Q6a();
    answers.Q6b();

    return 0;
}