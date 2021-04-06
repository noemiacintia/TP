#include <iostream>
#include <iomanip>
using namespace std;

#include "Time.cpp" // inclui definição da classe Time

int main()
{
   Time wakeUp( 6, 45, 0 ); // objeto não-constante
   const Time noon( 12, 0, 0 ); // objeto constante

                          // OBJETO      FUNÇÃO MEMBRO 
   wakeUp.setHour( 18 );  // não-const   não-const
   
   //noon.setHour( 12 );    // const       non-const
   wakeUp.getHour();      // não-const   const
   
   noon.getMinute();      // const           const
   noon.printUniversal(); // const           const
   
  // noon.printStandard();  // const       non-const
   wakeUp.printStandard();// não-const       non-const
   return 0;
} // fim de main

