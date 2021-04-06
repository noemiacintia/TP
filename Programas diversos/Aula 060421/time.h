#ifndef TIME_H
#define TIME_H

class Time 
{
public:
   Time( int = 0, int = 0, int = 0 ); // construtor padrão

   // funções set
   void setTime( int, int, int ); // configura time 
   void setHour( int ); // configura hour
   void setMinute( int ); // configura minute
   void setSecond( int ); // configura second

   // funções get (normalmente declaradas const)
   int getHour() const; // retorna hour        
   int getMinute() const; // retorna minute    
   int getSecond() const; // retorna second    

   // funções print (normalmente declaradas const)      
   void printUniversal() const; // imprime hora universal
   void printStandard(); // imprime hora padrão (deve ser const)
private:
   int hour; // 0 - 23 (formato de relógio de 24 horas)
   int minute; // 0 - 59
   int second; // 0 - 59
}; 

#endif

