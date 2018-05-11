#include <stdio.h>
struct stores
{
	char name[20];
	float price;
	int quantity;
};
struct stores update(struct stores product,float p,int q);
float mul(struct stores stock);
main()
{
	float p_increment,value;
	int Q_increment;

	struct stores item={"xyz",5.75,12};

	printf("Input increment values\n");
	printf("Price increment and quantity increment\n");
	scanf("%f %d",&p_increment,&Q_increment);

	/*********************************************/
	item=update(item,p_increment,Q_increment);
	/*********************************************/
	printf("update values of item\n");
	printf("Name:     %s\n",item.name);
	printf("Price:    %f\n",item.price);
	printf("Quantity  %d\n",item.quantity);


	/*******************************/
	value=mul(item);
	/*******************************/
	printf("value of the Item\n");
}
struct stores update(struct stores product,float p,int q)
{
	product.price+=p;
	product.quantity+=q;
	return(product);
}
float mul(struct stores stock)
{
	return(stock.price*stock.quantity);
}
