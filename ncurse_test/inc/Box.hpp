#ifndef BOX_HPP
#define BOX_HPP

class Box
{
    public:
        Box(int, int, int, int);
        ~Box();
        int const height;
        int const width;
        int const start_x;
        int const start_y;
};

#endif