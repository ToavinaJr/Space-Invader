#ifndef RESOURCE_IDENTIFIERS_HPP
#define RESOURCE_IDENTIFIERS_HPP

namespace sf {
    class Texture;
    class Font;
    class Shader;
    class SoundBuffer;
}

namespace Textures {
    enum ID {
        Entities,
        Jungle,
        TitleScreen,
        Buttons,
        Explosion,
        Particle,
        FinisheLine
    };
}

namespace Shaders {
    enum ID {
        BrightnessPass,
        DownSamplePass,
        GaussianBlurPass,
        AddPass
    };
}

namespace Fonts {
    enum ID {
        Main,
    };
}

namespace SoundEffect {
    enum ID {
        AlliedGunfire,
        EnemyGunfire,
        Explosion1,
        Explosion2,
        LaunchMissile,
        CollectPickup,
        Button
    };
}

namespace Music  {
    enum ID {
        MenuTheme,
        MissinTheme,
    };
}

template <typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID>
TextureHolder;

typedef ResourceHolder<sf::Font, Fonts::ID>
FontHolder;

typedef ResourceHolder<sf::Shader, Shaders::ID>
ShaderHolder;

typedef ResourceHolder<sf::SoundBuffer, SoundEffect::ID>
SoundBufferHolder;
#endif