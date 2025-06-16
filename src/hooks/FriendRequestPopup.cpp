#include <Geode/modify/FriendRequestPopup.hpp>

using namespace geode::prelude;

class $modify(PTFriendRequestPopup, FriendRequestPopup) {
    void uploadActionFinished(const int p0, const int code) {
        if (code == 29) {
            return FriendRequestPopup::uploadActionFinished(p0, 31);
        }
        return FriendRequestPopup::uploadActionFinished(p0, code);
    }
};