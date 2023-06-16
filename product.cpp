#include "product.h"

Product::Product(const std::string& n, double p)
	:name{n}
	,price{p}
{}

std::string Product::getName() { return name; }
void Product::setName(const std::string& n) { name = n; }
void Product::setPrice(double p) { price = p; }

UsualProduct::UsualProduct(const std::string& n, double p) 
	: Product(n, p)
	,isSale{false} 
{}
bool UsualProduct::getIsSale() const { 
	return isSale; 
}
double UsualProduct::getPrice() const {
	return price;
}
double UsualProduct::calculatePrice(int quantity) const {
	return price * quantity;
}

SaleProduct::SaleProduct(const std::string& n, double p) 
	: Product(n, p)
	,isSale{true} 
{}
bool SaleProduct::getIsSale() { 
	return isSale; 
}
double SaleProduct::getPrice() const {
	return price;
}
double SaleProduct::applyPromotion(int quantity) const {
	return price * quantity;
}

double BuyOneGetOneFreePromotion::applyPromotion(int quantity) const {
	int pairCount = quantity / 2;
	int singleCount = quantity % 2;
	return (price * pairCount) + (price * singleCount);
}



double BuyTreeForPriceOfOnePromotion::applyPromotion(int quantity) const {
	int pairCount = quantity / 3;
	int singleCount = quantity % 3;
	return (price * pairCount) + (price * singleCount);
}



double KilogramToGramPromotion::applyPromotion(int quantity) const {
	double weightInKg = quantity / 1000.0;
	return price * weightInKg;
}



double FourIs20Pacentsale::applyPromotion(int quantity) const {
	if(quantity >= 4) {
		double totalPrice = price * quantity;
		double discount = totalPrice * 0.2;
		return totalPrice - discount;
	}
	return price * quantity;
}
