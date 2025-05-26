//Roberto Carlos; Altran
//18045125

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <locale>
#include <sstream>

using namespace std;

struct Node {
  int data;
  Node *next;
};

class Stack {
private:                         //the data differs from the array
  Node *listpointer;
public:                          //the functions (methods) are identical
  Stack();
  ~Stack();
  void Push(int newthing);
  void Pop();
  int Top();
  bool isEmpty();
};

Stack::Stack() {
// constructor
  listpointer = NULL;
}

Stack::~Stack() {
// destructor

}

void Stack::Push(int newthing) {
// place the new thing on top of the stack
 Node *temp;
  temp = new Node;             //same as add node to front of linked-list
  temp->data = newthing;
  temp->next = listpointer;    //NOTE: no overflow problem
  listpointer = temp;
}
void Stack::Pop() {
// remove top item from the stack
Node *p;
  p = listpointer;
  if (listpointer != NULL) {     //        check to avoid underflow
     listpointer = listpointer->next;
     delete p;                //always delete a TEMPORARY variable
  }
}

int Stack::Top() {
// return the value of the top item
  return listpointer->data;  //WARNING: what if listpointer is NULL?
}

bool Stack::isEmpty() {
// returns true if the stack is empty
  if (listpointer == NULL) {
     return true;
  }
  return false;
} // implement your stack here */

int main( int argc, char** argv ){//get arguments from command line, i.e., yourexec filename
    Stack S;
    int result, op1 = 0,op2 = 0,number, i;
    char oper;
    string expression;
    ifstream input_file;
    if(argc!=2) {
      cout<< "needs a filename as argument  " << endl;
      exit(0);
    }
    input_file.open(argv[1]);
    if(!input_file.good()){
      cout<< "cannot read file " << argv[1] << endl;
      exit(0);
    }
    while(!input_file.eof()){
        getline(input_file,expression);
        if(isdigit(expression[0])){
          stringstream line(expression);
          line >> number;
          cout << "reading number " << number << endl;
          //modify here to deal with the Stack
          S.Push(number);
        }
        else {
          if(expression[0]=='+' || expression[0]=='-'|| expression[0]=='/'||expression[0]=='*') {
            stringstream line(expression);
            line >> oper;
            cout << "reading operator " << oper << endl;
           
              if(S.isEmpty() == false) {

                     op2 = S.Top();
            //POP
                     S.Pop();
}
else {
cout << "too many operators" << endl;
} if(S.isEmpty() == false) {

            op1 = S.Top();
            //POP
                     S.Pop();
}
else {
cout << "too many operators" << endl;
}
            //compute result
            //PUSH result
              result = 0;
            if(oper=='+') result=op2 + op1;
            if(oper=='*') result=op2 * op1;
            if(oper=='-') result=op1 - op2;
            if(oper=='/') result=op1 / op2;
                     S.Push(result);
          }
        }
    }
    int finalanswer = S.Top();
    S.Pop();
    
    if(S.isEmpty() == false) {
       cout << "too many numbers" << endl;
}
else {
        cout << "The result is " << finalanswer << endl;
}
    //the last element of the stack should be the final answer...
}
//(base) robertoaltran@Robertos-MBP algorithm % g++ -std=c++11 mycode1.cpp
//(base) robertoaltran@Robertos-MBP algorithm % ./a.out file_name.txt matrix1.txt
