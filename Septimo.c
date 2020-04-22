#include <math.h>
#include <fstream>
#include <iostream>

using namespace std;

struct complejo
{
double Im; // parte imaginaria 
double Re; // parte real
};

typedef struct complejo COMPLEJO;

COMPLEJO * crea_estructura(void)
{

COMPLEJO *ES_T;
ES_T = new (COMPLEJO);

cout<<"Dame la parte real del numero complejo: "<<endl;
cin>>ES_T->Re;
cout<<"Dame la parte imaginaria del numero complejo: "<<endl;
cin>>ES_T->Im;
return(ES_T);
}
Una posible llamada a esta función seria:

COMPLEJO * ES; 
ES = crea_estructura();
