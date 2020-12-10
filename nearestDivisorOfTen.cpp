// A program for rounding off to the nearest ten digit number 

#include <iostream> // pre process statement

using namespace std; // std namespace 

// processing and logical function
void nearestRoundOff() 
{
                // declaring values asa integer 
   unsigned int inputNum, roundOfNum, 
                unitVar, afterFive, 
                afterFiveRoundOff; 
                // wanted values for the operation 
    
    cout<<"Enter a Number ->  "<<endl; // output hints
    cin>>inputNum;  // input 
    
    unitVar = inputNum % 10; // taking the last digit alone as input for further process

    if(unitVar < 5) // if for true 
    {
       cout<<"this is the nearest roundoff to tens -> "<<inputNum - unitVar<<endl;   //  eg i = 153 then o = 150 
    }
    else // else for false 
    {
        afterFive = 10 - unitVar;
        cout<<"This is the nearest roundoff of ten -> ";
        cout<<afterFive + inputNum<<endl; // roundoff to greatest number eg-> input = 156 then output = 160 
    }
    
}
// end of logical function

// this func repeats the action if 1 is pressed and this is not an important function
void mainLoop() 
{
    while (true) {
        nearestRoundOff();
    }
} // repeater function // 

// ------------------------------------------------------------------------------------------------- //

// driver or executing function
int main() 
{
    // calling func
    nearestRoundOff();
    int val;
    cout<<"Type exit to exit or type 1 to recontinue -> ";
    cin>>val;

    // if block for "true" reasons  
    if(val == 1) {
       mainLoop(); // calling mainLoop func for looping infinite times 
    }

    // else block for "false" reasons
    else
    {
        cout<<"BYe BYe !"<<endl; // bye bye greet

    }
    mainLoop(); // while infinte loop for continues testing
    return 0;
   // proper termination
}

// end of program to roundoff to nearest ten digit number 
