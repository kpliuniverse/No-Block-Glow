#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/LevelEditorLayer.hpp>
class $modify(LevelEditorLayer) {
	GameObject* createObject(int p0, cocos2d::CCPoint p1, bool p2) {
		GameObject* object = LevelEditorLayer::createObject(p0, p1, p2);

		object->m_hasNoGlow = Mod::get()->getSettingValue<bool>("no-glow");
		object->m_isDontFade = Mod::get()->getSettingValue<bool>("dont-fade");
		object->m_isDontEnter = Mod::get()->getSettingValue<bool>("dont-enter");

        return object;
    }
};
