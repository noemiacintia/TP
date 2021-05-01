#include <iostream>
#include <iomanip>
using namespace std;

#include "Time.cpp" // inclui defini��o da classe Time

int main()
{
   Time wakeUp( 6, 45, 0 ); // objeto n�o-constante
   const Time noon( 12, 0, 0 ); // objeto constante

                          // OBJETO      FUN��O MEMBRO 
   wakeUp.setHour( 18 );  // n�o-const   n�o-const
   
   //noon.setHour( 12 );    // const       non-const
   wakeUp.getHour();      // n�o-const   const
   
   noon.getMinute();      // const           const
   noon.printUniversal(); // const           const
   
  // noon.printStandard();  // const       non-const
   wakeUp.printStandard();// n�o-const       non-const
   return 0;
} // fim de main

