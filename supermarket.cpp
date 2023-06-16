#include "supermarket.h"

Supermarket::Supermarket(const std::string& n) 
	:name{n}
	,products{nullptr} 
{}

Supermarket::Supermarket(const std::string& n, const std::vector<Product*>& p)
	:name{n}
	,products{p}
{}

std::string Supermarket::getName() const { 
	return name; 
}

std::vector<Product*> Supermarket::getProducts() const { 
	return products; 
}

void Supermarket::setName(const std::string& n) { 
	name = n; 
}

void Supermarket::setProducts(const std::vector<Product*>& p) { 
	products = p; 
}

void Supermarket::addProduct(Product* p) {
	products.push_back(p);
}

void Supermarket::deleteProduct(Product* p) {
	for(int i = 0; i < products.size(); ++i) {
		if(p->getName() == products[i]->getName()) {
			products.erase(products.begin() + i);
		}
	}
}

void Supermarket::viewProduct() {
	for(int i = 0; i < products.size(); ++i) {
		std::cout << products[i]->getName() << "-and its price is- " << products[i]->getPrice() << std::endl;
	}
}