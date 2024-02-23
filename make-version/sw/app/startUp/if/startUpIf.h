#pragma once

namespace StartUp
{


class StartUpIf
{
public:
        static StartUpIf* getInstance();
        static void startUpAllInternalSubModules();
        // static void startUpAllExternalSubModules();

        static void destroyAllInternalSubModules();
        // static void destroyAllExternalSubModules();

        // To avoid user doing copy/move operations
        StartUpIf(const StartUpIf&) = delete;
        StartUpIf(StartUpIf&&) = delete;
        StartUpIf& operator=(const StartUpIf&) = delete;
        StartUpIf& operator=(StartUpIf&&) = delete;

protected:
        // Only backend implementation (behind the scene) can define constructor and destructor.
        StartUpIf() = default;
        ~StartUpIf() = default;

}; // class StartUpIf

} // namespace StartUps