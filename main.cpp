#include "supermarket.h"

int main() {
	Supermarket s("City");
	UsualProduct* p1 = new UsualProduct("product1", 50);
	SaleProduct* p2 = new SaleProduct("product2", 100);
	std::vector<Product*> v = {p1, p2};
	s.setProducts(v);
	s.viewProduct();
	return 0;
}