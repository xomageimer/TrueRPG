#ifndef RPG_AUDIOSYSTEM_H
#define RPG_AUDIOSYSTEM_H

#include <entt.hpp>
#include "../components/AudioSourceComponent.h"
#include "../../client/audio/AudioSource.h"
#include "../../client/audio/AudioDevice.h"

class AudioSystem
{
    entt::registry &m_registry;

    std::unordered_map<entt::entity, AudioSource*> m_audioSourceRegistry;

    AudioDevice m_audioDevice;

public:
    AudioSystem(entt::registry &registry);

    void update();

    void destroy();

private:
    void onConstruct(entt::registry &registry, entt::entity entity);
    void onDestroy(entt::registry &registry, entt::entity entity);
};

#endif //RPG_AUDIOSYSTEM_H
