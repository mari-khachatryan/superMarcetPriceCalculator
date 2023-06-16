#include "product.h"
#include <vector>

class Supermarket {
public:
	Supermarket(const std::string& n);
	Supermarket(const std::string& n, const std::vector<Product*>& p);
	std::string getName() const;
	std::vector<Product*> getProducts() const;
	void setName(const std::string& n);
	void setProducts(const std::vector<Product*>& p);
	void addProduct(Product* p);
	void deleteProduct(Product* p);
	void viewProduct();

private:
	std::string name;
	std::vector<Product*> products;
};