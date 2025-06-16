#include <Geode/modify/ProfilePage.hpp>

using namespace geode::prelude;

class $modify(PTProfilePage, ProfilePage) {
    void loadPageFromUserInfo(GJUserScore* score) {
        const auto originalCommentHistory = score->m_commentHistoryStatus;
        score->m_commentHistoryStatus = 0;
        ProfilePage::loadPageFromUserInfo(score);
        score->m_commentHistoryStatus = originalCommentHistory;
    }
};