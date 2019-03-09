#include <iostream>

class Rectangle
{
    public:
        Rectangle()
            : _width{2}, _height{2}
            {}
        Rectangle(int initial_width, int initial_height)
            : _width{initial_width}, _height{initial_height}
            {}
        
        int getArea()
        {
            return this -> _width * this -> _height;
        }
        
        void resize(int new_width, int new_height)
        {
            _width = new_width;
            _height = new_height;
        }
        
        int get_width() {return _width;}
        int get_height() {return _height;}
        
    private:
        int _width;
        int _height;
};

main()
{
    Rectangle rectangle_a;
    Rectangle rectangle_b{};
    Rectangle rectangle_c{2, 3};
    
    Rectangle rectancle_d{};
    rectancle_d.resize(2, 3);
    
}