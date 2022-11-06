/* Samneet Singh
 * CSS342
 * Problem 1: The Good Mr. Catalan
 */
#include <iostream>
using namespace std;

// function declaration
long int catalan(int n);

int main(int argc, char *argv[]) {

    if(argc > 1)

    {

        long int n = atoi(argv[1]); // convert the command line argument for value of n to int

        cout<<"Catalan("<<n<<") = "<<catalan(n)<<endl;

    }else

        cout<<"Please pass the value of n via. command line argument (eg. ./a.out 4 would pass 4 to the function)"<<endl;

    return 0;

}

// this function finds the nth catalan number
long int catalan(int n)

{

    if(n == 0) // if n = 0, return 1

        return 1;

    else{

        long int result = 0;

// calculate the nth catalan number

        for(int i=0;i<n;i++)

            result += catalan(i)*catalan(n-1-i);

        return result;

    }

}
