#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>


class $modify(EditorUI) {
    bool init(LevelEditorLayer* p0) {
        if (!EditorUI::init(p0)) return false;

        if (cocos2d::CCMenu* linkMenu = static_cast<cocos2d::CCMenu*>(m_linkBtn->getParent())) {
            m_linkBtn->setVisible(true);
            m_unlinkBtn->setVisible(true);
            m_enableLinkBtn->setVisible(true);
            linkMenu->updateLayout();
            m_linkBtn->setVisible(false);
            m_unlinkBtn->setVisible(false);
            m_enableLinkBtn->setVisible(false);
        }

        return true;
    }
};