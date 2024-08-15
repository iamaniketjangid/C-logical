// max number
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is max");
    }
    else if(b>a && b>c){
        printf("b is max");
    }
    else if("c>a && c>b"){
        printf("c is max");
    }

    return 0;
}
-----------------------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    char ch,e,v,s,m,k;
    char key;
    
    int i;
    printf("enter the charcter\n");
    scanf("%c",&ch);
    
    if(ch == 'e'){
        printf("enter the number\n");
        scanf("%d",&i);
        if(i%2==0){
            printf("number is even\n");
            
        }
        else{
            printf("number is odd\n");
        }
    }
    int age;
     
    if (ch =='v'){
       printf("enter age\n");
        scanf("%d",&age);
         if("age>=18"){
            printf("eligible to vote");
         }
        else  {
            printf("not eligible to vote");
        }
    }

    
    int sea;
    
    if(ch == 's'){
        printf("enter the month");
    scanf("%d",&sea);
    if(sea==1 || sea == 2 ||sea == 11 || sea == 12){
        printf("witer");
    }
    
    else if(sea ==3 || sea == 4 || sea == 5 || sea == 6){
        printf("summer");
    }
    else if(sea == 7 || sea == 8 || sea == 9 || sea == 10){
        printf("rain");
}
}


    int mark;
    if(ch == 'm'){
        printf("enter the marks");
        scanf("%d",&mark);
        if(mark>=45){
            printf("pass grade: b ");
        }
        else if(mark>=59){
            printf("pass grade: a");
        }
        else if (mark<=40){
            printf("fail");
        }
    }a
    
    if (ch =='k')
        char key;
        printf("enter the key\n");
        scanf("%s",&key);
        if(key == 'q' && key == 'w'&& key == 'e' && key == 'r' && key == 't' && key== 'y' &&key =='u'&& key == 'i' && key == 'o' &&
        key == 'p'){
        printf("upper  key");
        }
        else if(key == 'a'&& key == 's' && key == 'd' && key=='f' && key == 'g' && key == 'h' && key == 'j' && key== 'k'&& key=='l'){
           printf("middle key");
    
        }
        else if(key== 'z' && key == 'x' && key == 'c' && key == 'v' && key == 'b' && key== 'n' && key == 'm'){
           
               printf("lowest key");
        
           
           }
    }
    
    


    return 0;
}
// 3e) Vowel and Consonant Check
void check_vowel_consonant() {
    char c;
    
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("%c is a vowel.\n", c);
    } else {
        printf("%c is a consonant.\n", c);
    }
}

// 3f) Swap Two Numbers With and Without Third Variable
void swap_with_third_variable() {
    int a = 5, b = 10, temp;
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After Swap (with third variable): a = %d, b = %d\n", a, b);
}

void swap_without_third_variable() {
    int a = 5, b = 10;
    
    a = a + b; // a now becomes 15
    b = a - b; // b becomes 5
    a = a - b; // a becomes 10
    
    printf("After Swap (without third variable): a = %d, b = %d\n", a, b);
}

// Looping Examples
void print_1_to_10() {
    int i = 1;
    
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    
    printf("\n");
}

void print_50_to_100() {
    int i = 50;
    
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    
    printf("\n");
}
return 0;
}