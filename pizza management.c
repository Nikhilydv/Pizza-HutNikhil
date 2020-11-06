#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>
//--------------------------------------------------------------
/* structure created */
typedef struct{
	char name[500];
	int qty,amt;
}items;

items cart[1000];

//Cart index
int cart_index = 0;
//global declaration
int cost1=0,cost2=0,cost3=0,cost4=0,cost5=0;
void type();
void ClassicRecipePizzas();
void New_Recipe_Pizzas();
void pizza_mania();
void size();
void coldrink();
void moctails();
void pizzapage();
void pasta();
void beverages();
void bill();
int quantity();
void menu()
{ 
int a;
while(1)
{    
	system("cls");
    printf("\t\t\t\t\t---------------------\n");
	printf("\t\t\t\t\t     MAIN MENUE      \n");
	printf("\t\t\t\t\t     1) PIZZA        \n");
	printf("\t\t\t\t\t     2) PASTA        \n");
	printf("\t\t\t\t\t     3) BEVRAGES     \n");
	printf("\t\t\t\t\t     4) exit         \n");
    printf("\t\t\t\t\t---------------------\n");
    printf("Enter your choice\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1: pizzapage();
        break;
    case 2: pasta();
	    break;   	
	case 3: beverages();
		break;
	case 4:exit(1);
		break;
	default: printf("wrong input");
}
}
}

//----------------------------------------------------

void exits()
{
	char choise;
	printf(" Do you want to continue Y/N\n");
	choise=getch();
	if(choise=='y' || choise == 'Y'){
		cart_index++;
		menu();
	}
	else if(choise=='n' || choise =='N'){
		bill();
		exit(0);
	}
	else
		printf("Invailed Choice");
}

//------------------------------------------------------------

void pizzapage()
{
	system("cls");
	int b;
	while(1)
	{
	printf(" select the type \n");
	printf("---------------------\n");
	printf("1) Classic Recipe Pizzas\n");
	printf("2) New Recipe Pizzas\n");
	printf("3) Pizza menia\n");
	printf("---------------------\n");
	printf(" Enter your choice \n");
	scanf("%d",&b);
	switch(b)
	{
	case 1: ClassicRecipePizzas();
		break;
	case 2: New_Recipe_Pizzas();
	    break;
	case 3: pizza_mania();
	    break;
	case 4: exit(1);
	default: printf("wrong input");
    }
}
}

//-------------------------------------------------------------

void ClassicRecipePizzas()
{
	int d;
	system("cls");
	printf("select the chiose\n");
	printf("---------------------\n");
	printf("1) Pepperoni Lover's Pizza \n");
	printf("2) Meat Lover's Pizza\n");
	printf("3) Ultimate Cheese Lover's Pizza\n ");
	printf("4) Veggie Lover's Pizza \n ");
	printf("5) Supreme Pizza \n");
	printf("6) BBQ Lover's \n");
	printf("7) Chicken Supreme Pizza \n");
	printf("8) Farm house \n");
	printf("---------------------\n");
	printf("enter your choise\n");
	scanf("%d",&d);
	switch(d){
		case 1: strcpy(cart[cart_index].name,"Pepperoni Lover's Pizza");
				break;
		case 2: strcpy(cart[cart_index].name,"Meat Lover's Pizza");
				break;
		case 3: strcpy(cart[cart_index].name,"Ultimate Cheese Lover's Pizza");
				break;
		case 4: strcpy(cart[cart_index].name,"Veggie Lover's Pizza");
				break;
		case 5: strcpy(cart[cart_index].name,"Supreme Pizza");
				break;
		case 6: strcpy(cart[cart_index].name,"BBQ Lover's");
				break;
		case 7: strcpy(cart[cart_index].name,"Chicken Supreme Pizza");
				break;				
		case 8: strcpy(cart[cart_index].name,"Farm house");
				break;		
	}
	if(d<=8)
	{
		type();
	}
	else
	{
		printf("wrong entry");
	}
}

//------------------------------------------------------

void New_Recipe_Pizzas()
{
	int e;
	system("cls");
	printf("select the chiose\n");
	printf("---------------------\n");
	printf("1) Garden Party \n");
	printf("2) 7-Alarm Fire \n");
	printf("---------------------\n");
	scanf("%d",&e);
	switch(e)
	{
	case 1: strcpy(cart[cart_index].name,"Garden Party");
				break;
	case 2: strcpy(cart[cart_index].name,"7-Alarm Fire ");
				break;
	}
	if(e<=2)
	{
		type();
	}
	else
	{
		printf("wrong entry");
	}
}

//---------------------------------------------------------

void pizza_mania()
{
	system("cls");
	int z;
	char x,y;
	printf("The pizza are onion,capsigum,onion,cheesy");
	strcpy(cart[cart_index].name,"Pizza Mania");
	cart[cart_index].qty = z = quantity();
	cost1=z*500;
	cart[cart_index].amt = cost1;
	printf("do you want to continue y/n\n");
	if(x==y)
	  pizzapage();
	else 
	  bill();
}

//------------------------------------------------------------
void type()
{
	system("cls");
	int c;
	printf("select the pizza\n");
	printf("---------------------\n");
    printf("1) Hand-Tossed\n");
	printf("2) Pan Pizza\n");
    printf("3) Thin N Crispy\n");
    printf("4) Stuffed Crust\n");
    printf("---------------------\n");
    scanf("%d",&c);
    if(c<=4)
    {
    	size();
	}
	else
	{
		printf("wrong entry");
	}
}

//-----------------------------------------------------

void size()
{
	system("cls");
	int a,f,cost2;
	printf("choose the size\n");
	printf("---------------------\n");
	printf("1) regular Rs:-150 \n");
	printf("2) medium Rs:-250\n");
	printf("3) large Rs:-350\n");
	printf("---------------------\n");
	printf("Enter your choice\n");
	scanf("%d",&f);
	switch(f)
	{
		case 1:a=quantity();
	           cost2=a*150;
	           cart[cart_index].amt = cost2;
	           break;
	    
	    case 2:a=quantity();
		       cost2=a*250;
		       cart[cart_index].amt = cost2;
		       break;
		case 3:a=quantity();
		       cost2=a*350;
		       cart[cart_index].amt = cost2;
		       break;
	}
    exits();
	}
	
//----------------------------------------------------------

void pasta()
{
	int g,z;
	system("cls");
	printf("choose the type\n");
	printf("-------------------------------------------\n");
	printf("1) Cheesy\n");
	printf("2) Flamy tomatoes \n");
	printf("3) Tuscani Chicken Alfredo with Breadsticks\n");
	printf("-------------------------------------------\n");
	printf("Enter your choice\n");
	scanf("%d",&g);
	switch(g)
	{
		case 1:strcpy(cart[cart_index].name,"Cheesy");
				z=quantity();
	        	cost3=z*350;
	        	cart[cart_index].amt = cost3;
	        	break;
	    case 2:strcpy(cart[cart_index].name,"Flamy tomatoes");
				z=quantity();
		    	cost3=z*400;
		    	cart[cart_index].amt = cost3;
		    	break;
		case 3:strcpy(cart[cart_index].name,"Tuscani Chicken Alfredo with Breadsticks");
				z=quantity();
		    	cost3=z*550;
		    	cart[cart_index].amt = cost3;
		    	break;
	}
	exits();
}

//-------------------------------------------------------------

void beverages()
{
void moctails();
void coldrink();
	int i;
	system("cls");
	printf("choose yor beverage\n");
	printf("---------------------\n");
	printf("1) cold drink\n");
	printf("2) moctails\n");
	printf("---------------------\n");
	scanf("%d",&i);
	switch(i)
	{
	case 1:	coldrink();
	       break;
	case 2: moctails();
	       break;
    default:
    	printf("wrrong input");
    }
	
	exits();
}

//-------------------------------------------------

void moctails()
{
	system("cls");
	int k;
	printf("choose your drink\n");
	printf("---------------------\n");
	printf("1) mojito            \n");
	printf("2) blue lagoon       \n");
	printf("3) chery blossam     \n");
	printf("4) green apple       \n");
	printf("---------------------\n");
	scanf("%d",&k);
	switch(k)
	{
		case 1: strcpy(cart[cart_index].name,"Mojito");
				break;
		case 2: strcpy(cart[cart_index].name,"blue lagoon");
				break;
		case 3: strcpy(cart[cart_index].name,"chery blossam");
				break;
		case 4: strcpy(cart[cart_index].name,"green apple");
				break;
	}
	if(k<=4)
	{
	 cart[cart_index].amt = cost4=50;
	}
	else
	{
		printf("wrong input");
	}
	}

//------------------------------------------------

void coldrink()
{	
	system("cls");
	int j;
	printf("enter your choise\n");
	printf("---------------------\n");
	printf("1) cocacola          \n");
	printf("2) mountain dew      \n");
	printf("3) pepsi             \n");
	printf("4) fanta             \n");
	printf("---------------------\n");
	scanf("%d",&j);
	
	switch(j)
	{
		case 1: strcpy(cart[cart_index].name,"CocaCola");
				break; 
		case 2: strcpy(cart[cart_index].name,"mountain dew ");
				break; 
		case 3: strcpy(cart[cart_index].name,"pepsi");
				break; 
		case 4: strcpy(cart[cart_index].name,"fanta ");
				break; 
	}
	if(j<=4)
	{ 
	cost5=quantity()*35;
		cart[cart_index].amt = cost5;
	}
}

//-------------------------------------------------

int quantity()
{
	int z1;
	printf("enter the quantity\n");
	scanf("%d",&z1);
	cart[cart_index].qty = z1;
	return(z1);
}

//--------------------------------------------------

void bill()
{
	int total;
	int i;
	system("cls");
	printf("\t\t\tYour Bill");
	for (i = 0; i<=cart_index;i++)
	{
		total += cart[i].amt;
		printf("\n%d. %s\nQuantity: %d\nAmount: %d\n\n",(i+1),cart[i].name,cart[i].qty,cart[i].amt);
	}
	
}

//---------------------------------------------------
int main()
{
	menu();
}
