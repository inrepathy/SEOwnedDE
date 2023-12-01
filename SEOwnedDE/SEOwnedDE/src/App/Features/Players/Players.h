#pragma once

#include "../../../SDK/SDK.h"

class CPlayers
{
public:
	struct PlayerInfo
	{
		bool m_ignored{};
		bool m_cheater{};
		bool m_retard_legit{};
	};

	void parse();
	void mark(int entindex, const PlayerInfo &info);
	bool getInfo(int entindex, PlayerInfo &out);
	bool getInfoGUID(const std::string &guid, PlayerInfo &out);
};

MAKE_SINGLETON_SCOPED(CPlayers, Players, F);