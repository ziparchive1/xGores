/* (c) Shereef Marzouk. See "licence DDRace.txt" and the readme.txt in the root of the distribution for more information. */
/* modifed by xx11org */
#ifndef GAME_SERVER_GAMEMODES_DDRACE_H
#define GAME_SERVER_GAMEMODES_DDRACE_H

#include <game/server/gamecontroller.h>
#include <game/server/teams.h>
#include <game/server/score.h>

#include <map>
#include <vector>

class CGameControllerXGores : public IGameController
{
public:
        CGameControllerXGores(class CGameContext *pGameServer);
        ~CGameControllerXGores();

        CScore *Score();

        void OnCharacterSpawn(class CCharacter *pChr) override;
        void HandleCharacterTiles(class CCharacter *pChr, int MapIndex) override;

        void OnPlayerConnect(class CPlayer *pPlayer) override;
        void OnPlayerDisconnect(class CPlayer *pPlayer, const char *pReason) override;

        void OnReset() override;

        void Tick() override;

        void DoTeamChange(class CPlayer *pPlayer, int Team, bool DoChatMsg = true) override;

        CClientMask GetMaskForPlayerWorldEvent(int Asker, int ExceptID = -1);

        void InitTeleporter();

        int GetPlayerTeam(int ClientID) const;

        CGameTeams m_Teams;

        std::map<int, std::vector<vec2>> m_TeleOuts;
        std::map<int, std::vector<vec2>> m_TeleCheckOuts;
};
#endif // GAME_SERVER_GAMEMODES_DDRACE_H
