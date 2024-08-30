#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/LevelEditorLayer.hpp>
class $modify(LevelEditorLayer) {
	GameObject* createObject(int p0, cocos2d::CCPoint p1, bool p2) {
		GameObject* object = LevelEditorLayer::createObject(p0, p1, p2);

		object->m_hasNoGlow = true;
        return object;
    }
};
