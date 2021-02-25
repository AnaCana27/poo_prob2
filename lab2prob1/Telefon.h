#pragma once

#include <string.h>

class Telefon
{
private:
	string name;
	float stars;
	float price;
	float userRtaing;

public:
	void setNume(string numeValue);
	void setStars(float starsValue);
	void setPrice(float priceValue);
	void setUserRating(float userRatingValue);
	string getNume();
	float getStars();
	float getPrice();
	float getUserRating();

};