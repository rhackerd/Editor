#ifndef CORE_HPP
#define CORE_HPP

#include <nova/logger/logger.hpp>


class Core {
    private:
        Nova::Logger _l;
    public:
        Core();
        ~Core();

        void load();
        void unload();
};

#endif