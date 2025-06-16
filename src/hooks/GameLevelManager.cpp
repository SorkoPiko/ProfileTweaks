#include <Geode/modify/GameLevelManager.hpp>

using namespace geode::prelude;

class $modify(PTGameLevelManager, GameLevelManager) {
    void acceptFriendRequest(const int accountID, const int requestID) {
        return uploadFriendRequest(accountID, "");
    }
};