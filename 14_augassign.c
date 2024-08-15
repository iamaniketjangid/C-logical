*
**
***
****
*****

dry run 

----------------------------------------
*****
****
***
**      
*
dry run 
----------------------------------------
    *
   **
  ***
 ****
*****
dry run
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
----------------------------------------
*****
 ****
  ***
   **
    *

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
----------------------------------------
    *
   **
  ***
 ****
*****
*****
 ****
  ***
   **
    *
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
----------------------------------------
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=2;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
----------------------------------------

*****
 ****
  ***
   **
    *
    *
   **
  ***
 ****
*****
#include <stdio.h>

int main()
{
    
    for(int i=2;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
  

    return 0;
}
----------------------------------------

*****
 ****
  ***
   **
    *
   **
  ***
 ****
*****

#include <stdio.h>

int main()
{
    
    for(int i=2;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=2;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
  

    return 0;
}
---------------------------------------- 
    *
   * *
  * * * 
 * * * *
* * * * * 
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
  

    return 0;
}
---------------------------------------- 
* * * * *
 * * * *
  * * *
   * *
    *

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf(" *");
        }
        printf("\n");
    }
  

    return 0;
}

---------------------------------------- 
    *
   * *
  * * * 
 * * * *
* * * * * 
* * * * *
 * * * *
  * * *
   * *
    *
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    
    for(int i=1;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf(" *");
        }
        printf("\n");
    }
  

    return 0;
}
---------------------------------------- 
    *
   * *
  * * * 
 * * * *
* * * * * 
 * * * *
  * * *
   * *
    *
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    
    for(int i=2;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf(" *");
        }
        printf("\n");
    }
  

    return 0;
}
-----------------------------------------------------------
* * * * *
 * * * *
  * * *
   * *
    *
    *
   * *
  * * * 
 * * * *
* * * * * 

 for(int i=1;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf(" *");
        }
        printf("\n");
    }

-----------------------------------------------------------
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * * 
 * * * *
* * * * * 

#include <stdio.h>

int main()
{
    
     for(int i=1;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf(" *");
        }
        printf("\n");
    }
    for(int i=2;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    
   
  

    return 0;
}
-----------------------------------------------------------
*****
*****
*****
*****

#include <stdio.h>

int main()
{
    
     for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
   
    
    return 0;
}
-----------------------------------------------------------
12345
12345
12345
12345
#include <stdio.h>

int main()
{
    
     for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
   
    
    return 0;
}

j 
-----------------------------------------------------------
1111
2222
3333
4444
5555

#include <stdio.h>

int main()
{
    
     for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%d",i);
        }
        printf("\n");
    }
   
    
    return 0;
}
-----------------------------------------------------------
10101
10101
10101
10101

#include <stdio.h>

int main()
{
    
     for(int i=1;i<=5;i++){
            printf("10101");
        printf("\n");
    }
   
    
    return 0;
}
-----------------------------------------------------------
1111
0000
1111
0000
1111
#include <stdio.h>

int main()
{
    
     for(int i=-1;i<=2;i++){
         printf("0000\n1111\n");
     }
    
    
    return 0;
}
-----------------------------------------------------------
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15 
16 17 18 19 20
21 22 23 24 25 
#include <stdio.h>

int main()
{
    
     for(int i=1;i<=25;i++){
           printf("%d",i);
           if(i%5 == 0){
               printf("\n");
           }
         }
     
    return 0;
}
-----------------------------------------------------------
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0 
1 0 1 0 1 

#include <stdio.h>

int main()
{
    
     for(int i=1;i<=5;i++){
         
           printf("1 0 1 0 1\n");
         }
     
    return 0;
}
-----------------------------------------------------------
1
12
123
1234
12345
#include <stdio.h>

int main()
{
    
     for(int i=1;i<=5;i++){
         for(int j=1;j<=i;j++){
           printf("%d",j);
         }
         printf("\n");
     }
     
    return 0;
}
-----------------------------------------------------------
1
22
333
4444
55555
#include <stdio.h>

int main()
{
    
     for(int i=1;i<=5;i++){
         for(int j=1;j<=i;j++){
           printf("%d",i);
         }
         printf("\n");
     }
     
    return 0;
}
-----------------------------------------------------------
1
10
101
1010
10101
#include <stdio.h>

int main()
{
    int ch;
     for(int i=1;i<=5;i++){
         for(int j=1;j<=i;j++){
           if(j%2!=0)
           printf("1");
           else{
               printf("0");
           }
           
         }
         printf("\n");
     }
     
    return 0;
}
-----------------------------------------------------------
1
00
111
0000
11111
#include <stdio.h>

int main()
{
    int ch;
     for(int i=1;i<=5;i++){
         for(int j=1;j<=i;j++){
           if(i%2!=0)
           printf("1");
           else{
               printf("0");
           }
           
         }
         printf("\n");
     }
     
    return 0;
}
-----------------------------------------------------------
1
23
456
-----------------------------------------------------------
1
01
010
-----------------------------------------------------------
1111
4444
9999
16161616
-----------------------------------------------------------
1 4 9 16 
1 4 9 16 
1 4 9 16 
1 4 9 16 
-----------------------------------------------------------
####*
###**
##***
#****
*****
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf("#");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
-----------------------------------------------------------
*****
#****
##***
###**
####*

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf("#");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
-----------------------------------------------------------
####*
###**
##***
#****
*****
*****
#****
##***
###**
####*

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf("#");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=1;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf("#");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
-----------------------------------------------------------
####*
###**
##***
#****
*****
#****
##***
###**
####*

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int s=4;s>=i;s--){
            printf("#");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=2;i<=5;i++){
        for(int s=2;s<=i;s++){
            printf("#");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
-----------------------------------------------------------



















