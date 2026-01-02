#include "../client.h"

void command_enteringmsg(Client *c, const Seperator *sep)
{
	//Client::EnteringMessages(Client* client)
	std::string rules = RuleS(World, Rules);

	const std::string& rules_link = Saylink::Silent("#serverrules", "#serverrules");
	const std::string& rules_link2 = Saylink::Silent("#acceptrules", "#acceptrules");

	c->Message(
		Chat::White,
		fmt::format(
			"Please view #serverrules and /say #acceptrules to agree to the rules {} | {}.",
			rules_link, rules_link2
		).c_str()
	); 
}
