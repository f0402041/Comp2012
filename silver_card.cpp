#include "regular_card.h"
#include "silver_card.h"


//TODO: Implement the constructor here.
SilverCard::SilverCard(int id, string na, int coup) {}

//TODO: Implement the get_number_of_coupons function here.
int SilverCard::get_number_of_coupons() const {
}

//TODO: Print "Dear regular member {name},
//             remaining benefits are {get_credits} credits,
//                                    {number_of_cupons} coupons. ".
void SilverCard::check_member_benefits() const {
}

//TODO: Exchange credits for coup coupons (5 credits for 1 coupon).
void SilverCard::exchange_credits_for_coupons(int coup) {
	if (coup <= 0) {
		cout << "SORRY, the input must be positive." << endl;
	} else {
	}
}

