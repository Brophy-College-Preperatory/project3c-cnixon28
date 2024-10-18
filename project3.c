#include <stdio.h>


int main(void){
int x;
int quarters = 0;
int dimes = 0;
int nickels = 0;
int pennies = 0;
char choice = 'y';
  
while(choice == 'y'){
quarters = 0;
dimes = 0;
pennies = 0;
nickels = 0;
    printf("\nHow much change is owed?\n\n");
printf("Enter as a whole number. For example, enter $.41 as 41. ");
scanf("%i", &x);

while(x > 24){
    x = x - 25;  // Adds one to quarters when the number is over 25
    quarters++;
}
while(x > 9){
    x = x - 10;
    dimes++;
}
while(x > 4){
    x = x - 5;
    nickels++;
}
while(x > 0){
    x = x - 1;
    pennies++;
}

printf("Here is the change you owe:\n");

printf("%i quarters\n%i dimes\n%i nickels\n%i pennies\n\n",quarters,dimes,nickels,pennies);
printf("continue? (y/n)");
scanf(" %c", &choice);
}  

    return 0;
}

//git add *
// git commit -m"done"
//git push