#pragma once

class Scene {
    public:
        virtual ~Scene() {};
        virtual void Update(float deltaTime) = 0;
        virtual void Render() = 0;
};