#include"ex.h"
int  lamborgini::setmodel(int  m)
{
   model=m;
}
int lamborgini::setyear(int y)
{
  year=y;

}
int lamborgini::setlimit(int l)
{
  
  limit=l;

}

int  lamborgini::getmodel()
{
    return model;
}
int lamborgini::getlimit()
{
    return limit;
}
int lamborgini::getyear()
{
    return year;
}

 int lamborgini::durbality=15;