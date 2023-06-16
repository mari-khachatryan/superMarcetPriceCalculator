#include <iostream>

class Product {
public:
	Product(const std::string& n, double p);
	std::string getName();
	virtual double getPrice() const = 0;
	void setName(const std::string& n);
	void setPrice(double p);
	virtual ~Product() = default;
protected:
	std::string name;
	double price;
};

class UsualProduct : public Product {
public:
	UsualProduct(const std::string& n, double p);
	bool getIsSale() const;
	double getPrice() const override;
	virtual double calculatePrice(int quantity) const;
private:
	bool isSale;
};


class SaleProduct : public Product {
public:
	SaleProduct(const std::string& n, double p);
	bool getIsSale();
	double getPrice() const override;
	virtual double applyPromotion(int quantity) const;
private:
	bool isSale;
};

class BuyOneGetOneFreePromotion : public SaleProduct {
public:
	double applyPromotion(int quantity) const override;
};

class BuyTreeForPriceOfOnePromotion : public SaleProduct {
public:
	double applyPromotion(int quantity) const override;
};

class KilogramToGramPromotion : public SaleProduct {
public:
	double applyPromotion(int quantity) const override;
};

class FourIs20Pacentsale : public SaleProduct {
public:
	double applyPromotion(int quantity) const override;
};
















