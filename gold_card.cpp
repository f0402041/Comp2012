#include "gold_card.h"

#include "silver_card.h"

//TODO: Implement the constructor here.
GoldCard::GoldCard(int id, string na, int coup, int tick){}

//TODO: Print "Dear regular member {name},
//            remaining benefits are {get_credits} credits,
//                                   {get_number_of_cupons} coupons,
//                                   {number_of_free_tickets} free tickets. ".
void GoldCard::check_member_benefits() const {
}

//TODO: Exchange credits for tick free tickets (20 credits for 1 coupon).
void GoldCard::exchange_credits_for_free_tickets(int tick) {
	if (tick <= 0) {
		cout << "SORRY, the input must be positive." << endl;
	} else {
	}
}
