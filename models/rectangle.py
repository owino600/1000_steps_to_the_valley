#!/usr/bin/python3
"""define a rectangle class"""
from models.base import Base

class Rectangle(Base):
    def __init__(self, width, height, x=0, y=0, id=None):
        self.width = width
        self.height = height
        self.x = x
        self.y = y
        super().__init__(id)
        @property
        def width(self):
            """get the width of the rectangle"""
            return self.__width
        @width.setter
        def width(self, value):
            if type(value) != int:
                raise TypeError("width must be an integer")
            if value <= 0:
                raise ValueError("width must be > 0")
            self.__width = value

            @property
            def height(self):
                """get the height of the rectangle"""
                return self.__height
            @height.setter
            def height(self, value):
                if type(value) != int:
                    raise TypeError("height must be an integer")
                if type(value) <= 0:
                    raise ValueError("heightis > 0")
                self.__height = value
                @property
                def x(self)
                """get value of x"""
                return self.__x

            @x.setter
            def x(self, value):
                if type(value) != int:
                    raise TypeError("x must be an integer")
                if type(value) <= 0:
                    raise ValueError("x must be >= 0")
                self.__x = value

                @property
                def y(self):
                    """get the value of y"""
                    return self.__y

                @y.setter
                def y(self, value):
                    if type(value) != int:
                        raise TypeError("y must be an integer")
                    if type(value) <= 0:
                        raise ValueError("y must be >= 0")
                    self.__y = value

                    def area(self):
                        """calculate the area of the rectangle"""
                        return self.width * self.height

                    def display(self):
                        """print the rectangle"""
                        if self.width == 0 or self.height == 0:
                            return
                        [print("") for y in range(self.y)]
                        for height in range(self.height):
                            [print(" ", end="") for x in range(self.x)]
                            [print("#", end="") for w in range(self.width)]
                            print("")

