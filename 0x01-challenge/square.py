#!/usr/bin/python3

class Square():
    def __init__(self, *args, **kwargs):
        self.width = 0

        for key, value in kwargs.items():
            setattr(self, key, value)
        self.height = self.width

    def area_of_my_square(self):
        """ Area of the square """
        return self.width * self.width

    def perimiter_of_my_square(self):
        return (self.width * 2) + (self.height * 2)

    def __str__(self):
        return "{}/{}".format(self.width, self.height)


if __name__ == "__main__":

    s = Square(width=12, height=9)
    print(s)
    print(s.area_of_my_square())
    print(s.perimiter_of_my_square())
