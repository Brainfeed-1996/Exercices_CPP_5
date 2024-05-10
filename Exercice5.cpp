#include <iostream>
using namespace std ;
main ()
{
int i, j, n ;
i = 0 ; n = i++ ;
cout << "A : i = " << i << " n = " << n << "\n" ;
i = 10 ; n = ++ i ;
cout << "B : i = " << i << " n = " << n << "\n" ;
i = 20 ; j = 5 ; n = i++ * ++ j ;
cout << "C : i = " << i << " j = " << j << " n = " << n << "\n" ;
i = 15 ; n = i += 3 ;
cout << "D : i = " << i << " n = " << n << "\n" ;
i = 3 ; j = 5 ; n = i *= --j ;
cout << "E : i = " << i << " j = " << j << " n = " << n << "\n" ;
}

/*
Voici ce que renvoie le programme :
A : i = 1 n = 0
B : i = 11 n = 11
C : i = 21 j = 6 n = 120
D : i = 18 n = 18
E : i = 12 j = 4 n = 12
  */
