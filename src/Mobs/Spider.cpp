
#include "Globals.h"  // NOTE: MSVC stupidness requires this to be the same across all modules

#include "Spider.h"





cSpider::cSpider(void) :
	super("Spider", mtSpider, "mob.spider.say", "mob.spider.death", 1.4, 0.9)
{
}





void cSpider::GetDrops(cItems & a_Drops, cEntity * a_Killer)
{
	int LootingLevel = a_Killer->GetEquippedWeapon().m_Enchantments.GetLevel(21);
	AddRandomDropItem(a_Drops, 0, 2 + LootingLevel, E_ITEM_STRING);
	if (a_Killer->IsA("cPlayer") || a_Killer->IsA("cWolf"))
	{
		AddRandomUncommonDropItem(a_Drops, 33.0f, E_ITEM_SPIDER_EYE);
	}
}




