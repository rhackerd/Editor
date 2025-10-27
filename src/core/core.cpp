#include "include/core.h"
#include <nova/logger/logger.hpp>

Core::Core() {
    Nova::Logger::init("Template-Cmake");
}

Core::~Core() {}

void Core::load() {
    Nova::Logger::info("Core loaded.");
}

void Core::unload() {
    Nova::Logger::info("Core unloaded");
}